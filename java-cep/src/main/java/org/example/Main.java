package org.example;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.CountDownLatch;

import org.json.JSONException;
import org.json.JSONObject;

import com.espertech.esper.runtime.client.EPStatement;
import com.rabbitmq.client.Channel;
import com.rabbitmq.client.Connection;
import com.rabbitmq.client.ConnectionFactory;

//Por Alexandra Moron Mendez

public class Main {
    /** Cola donde la fuente externa publica eventos simples (entrada al CEP). */
    private static final String INPUT_QUEUE_NAME = "InputMessages";
    /** Cola donde el listener del CEP publica resultados (salida). */
    private static final String OUTPUT_QUEUE_NAME = "OutputMessages";

    public static void main(String[] argv) throws Exception {
        ConnectionFactory factory = new ConnectionFactory();
        factory.setHost("localhost");

        Connection connection = factory.newConnection();
        Channel channel = connection.createChannel();
        channel.queueDeclare(INPUT_QUEUE_NAME, true, false, false, null);
        channel.queueDeclare(OUTPUT_QUEUE_NAME, true, false, false, null);

        // EPStatement configuration
        EsperUtils.init();

        String schemasEpl =
                "@public @buseventtype create json schema Temperatura (id String, lat double, lon double, temp_c double, source String); "
                        + "@public @buseventtype create json schema Profundidad (id String, lat double, lon double, depth_m double, source String); "
                        + "@public @buseventtype create json schema Salinidad (id String, lat double, lon double, sal_psu double, source String); "
                        + "@public @buseventtype create json schema Presion (id String, lat double, lon double, pressure_dbar double, source String); "
                        + "@public @buseventtype create json schema Sonido (id String, lat double, lon double, dom_freq_hz double, spl_db double, snr_db double, source String); "
                        + "@public @buseventtype create json schema Estado (id String, lat double, lon double, batt_pct double, rssi_dbm double, status String, source String); "
                        + "@public @buseventtype create json schema Viento (direction String, velocity double, source String); "
                        + "@public @buseventtype create json schema eNose (id String, lat double, lon double, airQuality int, source String);"
                        + "@public @buseventtype create json schema AlertaTerremoto (source String, id1 String, id2 String, lat double, lon double, mensaje String);"
                        + "@public @buseventtype create json schema AlertaCetaceos (source String, id String, lat double, lon double, dom_freq_hz double, snr_db double, mensaje String, avg_spl double, num_detecciones long, spl_db double);"
                        + "@public @buseventtype create json schema AlertaTraficoMarino (source String, id String, lat double, lon double, batt_pct double, rssi_dbm double, status String, mensaje String, freq_media double, spl_medio double, lecturas long);"
                        + "@public @buseventtype create json schema AlertaAireContaminado (source String, id String, lat double, lon double, calidad_media double, peor_lectura double, num_lecturas long);";

        String contextEpl =
                "create context SegmentedBySource " +
                        "partition by " +
                        "source from Temperatura, " +
                        "source from Profundidad, " +
                        "source from Salinidad, " +
                        "source from Presion, " +
                        "source from Sonido, " +
                        "source from Estado, " +
                        "source from Viento, " +
                        "source from eNose, " +
                        "source from AlertaTerremoto, " +
                        "source from AlertaCetaceos, " +
                        "source from AlertaTraficoMarino";

        String allEpl = String.join("; ",
                schemasEpl,
                contextEpl,
                String.join("; ", EsperQueries.getAllInContext("SegmentedBySource"))
        );

        EPStatement[] statements = EsperUtils.deployPattern(allEpl).getStatements();
        for (EPStatement epStatement : statements) {
            String name = epStatement.getName();
            if (name != null && name.startsWith("Alerta")) {
                EsperUtils.addListener(epStatement, channel);
            }
        }

        boolean autoAck = false;
        channel.basicConsume(INPUT_QUEUE_NAME, autoAck, (consumerTag, delivery) -> {
            try {
                String body = new String(delivery.getBody(), StandardCharsets.UTF_8);
                transformarYLanzarEventosEsper(body);
                channel.basicAck(delivery.getEnvelope().getDeliveryTag(), false);
            } catch (Exception e) {
                e.printStackTrace();
                try {
                    channel.basicNack(delivery.getEnvelope().getDeliveryTag(), false, false);
                } catch (IOException io) {
                    io.printStackTrace();
                }
            }
        }, consumerTag -> { });

        System.out.println("CEP escuchando en cola \"" + INPUT_QUEUE_NAME + "\". Ctrl+C para salir.");

        CountDownLatch shutdown = new CountDownLatch(1);
        Runtime.getRuntime().addShutdownHook(new Thread(() -> {
            try {
                EsperUtils.undeployAll();
                if (channel.isOpen()) {
                    channel.close();
                }
                if (connection.isOpen()) {
                    connection.close();
                }
            } catch (Exception e) {
                e.printStackTrace();
            } finally {
                shutdown.countDown();
            }
        }));
        shutdown.await();
    }

    /**
     * Convierte JSON de entrada en uno o varios eventos Esper.
     * <ul>
     *   <li>Si en la raíz hay {@code airQuality} → se trata como mensaje eNose (requiere {@code id}, {@code lat}, {@code lon}).</li>
     *   <li>Si en la raíz hay {@code direccion} (o {@code direction}) → mensaje Viento (requiere {@code velocidad}); no exige id/lat/lon.</li>
     *   <li>En caso contrario → JSON agregado de boya (exige {@code id}, {@code lat}, {@code lon} y fan-out de sensores).</li>
     * </ul>
     * Convive con MQTT vía plugin RabbitMQ: el cuerpo es el mismo JSON; no depende de cabeceras AMQP.
     */
    private static void transformarYLanzarEventosEsper(String jsonEntrada) throws JSONException {
        JSONObject raw = new JSONObject(jsonEntrada);
        JSONObject n = normalizarClavesJson(raw);



        String id = optCadena(n, "id");
        Integer lat = optEntero(n, "lat");
        Integer lon = optEntero(n, "lon");

        if(id.charAt(0)=='F'){
            n.put("source", "simulation");
        }
        else{
            n.put("source", "nominal");
        }
        String partition = optCadena(n,"source");

        if (n.has("direction") && !n.isNull("direction")) {
            String direction = optCadena(n, "direction");
            Double velocity = optDoble(n, "velocity");
            if (direction == null || velocity == null) {
                throw new JSONException("Viento: se requieren direction/direccion y velocidad");
            }
            JSONObject o = new JSONObject();
            o.put("direction", direction);
            o.put("velocity", velocity);
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Viento");
            return;
        }

        if (id == null || lat == null || lon == null) {
            throw new JSONException("Faltan campos obligatorios id, lat o lon tras normalizar claves");
        }


        if (n.has("airQuality") && !n.isNull("airQuality")) {
            Integer iaq = optEntero(n, "airQuality");
            
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("airQuality", iaq);
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "eNose");
            return;
        }

        enviarSiPresente(n, "temp_c", () -> {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("temp_c", optEntero(n, "temp_c"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Temperatura");
        });

        enviarSiPresente(n, "depth_m", () -> {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("depth_m", optEntero(n, "depth_m"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Profundidad");
        });

        enviarSiPresente(n, "sal_psu", () -> {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("sal_psu", optEntero(n, "sal_psu"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Salinidad");
        });

        enviarSiPresente(n, "pressure_dbar", () -> {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("pressure_dbar", optEntero(n, "pressure_dbar"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Presion");
        });

        if (n.has("dom_freq_hz") && n.has("spl_db") && n.has("snr_db")) {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("dom_freq_hz", optEntero(n, "dom_freq_hz"));
            o.put("spl_db", optEntero(n, "spl_db"));
            o.put("snr_db", optEntero(n, "snr_db"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Sonido");
        }

        if (n.has("batt_pct") && n.has("rssi_dbm") && n.has("status")) {
            JSONObject o = new JSONObject();
            o.put("id", id);
            o.put("lat", lat);
            o.put("lon", lon);
            o.put("batt_pct", optEntero(n, "batt_pct"));
            o.put("rssi_dbm", optEntero(n, "rssi_dbm"));
            o.put("status", optCadena(n, "status"));
            o.put("source", partition);
            EsperUtils.sendEventTyped(o.toString(), "Estado");
        }
    }

    private static JSONObject normalizarClavesJson(JSONObject raw) {
        JSONObject out = new JSONObject();
        for (String k : raw.keySet()) {
            if (k == null) {
                continue;
            }
            String nk = k.trim();
            if (!out.has(nk)) {
                out.put(nk, raw.get(k));
            }
        }
        return out;
    }

    private static String optCadena(JSONObject n, String clave) {
        if (!n.has(clave) || n.isNull(clave)) {
            return null;
        }
        Object v = n.get(clave);
        if (v == null) {
            return null;
        }
        String s = String.valueOf(v).trim();
        return s.isEmpty() ? null : s;
    }

    private static Integer optEntero(JSONObject n, String clave) {
        if (!n.has(clave) || n.isNull(clave)) {
            return null;
        }
        Object v = n.get(clave);
        if (v instanceof Number) {
            return ((Number) v).intValue();
        }
        try {
            return Integer.parseInt(String.valueOf(v).trim());
        } catch (NumberFormatException e) {
            return null;
        }
    }

    private static Double optDoble(JSONObject n, String clave) {
        if (!n.has(clave) || n.isNull(clave)) {
            return null;
        }
        Object v = n.get(clave);
        if (v instanceof Number) {
            return ((Number) v).doubleValue();
        }
        try {
            return Double.parseDouble(String.valueOf(v).trim());
        } catch (NumberFormatException e) {
            return null;
        }
    }

    @FunctionalInterface
    private interface RunnableEnvio {
        void run() throws JSONException;
    }

    private static void enviarSiPresente(JSONObject n, String campoNumerico, RunnableEnvio envio) throws JSONException {
        if (!n.has(campoNumerico) || n.isNull(campoNumerico)) {
            return;
        }
        if (optEntero(n, campoNumerico) == null) {
            return;
        }
        envio.run();
    }
}

