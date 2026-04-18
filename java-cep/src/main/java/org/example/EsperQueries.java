package org.example;

import com.espertech.esper.common.client.EPCompiled;
import com.espertech.esper.common.client.configuration.Configuration;
import com.espertech.esper.compiler.client.CompilerArguments;
import com.espertech.esper.compiler.client.EPCompileException;
import com.espertech.esper.compiler.client.EPCompiler;
import com.espertech.esper.compiler.client.EPCompilerProvider;
import com.espertech.esper.runtime.client.*;
import com.rabbitmq.client.Channel;
import org.json.JSONObject;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.Map;
import java.util.TimeZone;

public class EsperQueries {

    public static final String ALERTA_CETACEOS =
            "@name('AlertaCetaceos') " +
                    "insert into AlertaCetaceos " +
                    "SELECT id, lat, lon, dom_freq_hz, spl_db, snr_db, " +
                    "avg(spl_db) as avg_spl, count(*) as num_detecciones " +
                    "FROM Sonido#time_batch(2 min) " +
                    "WHERE dom_freq_hz BETWEEN 10 AND 10000 " +
                    "AND spl_db > 110 " +
                    "AND snr_db > 15 " +
                    "HAVING count(*) >= 3";

    public static final String ALERTA_TRAFICO_MARINO =
            "@name('AlertaTraficoMarino') " +
                    "insert into AlertaTraficoMarino " +
                    "SELECT id, lat, lon, " +
                    "avg(dom_freq_hz) as freq_media, " +
                    "avg(spl_db) as spl_medio, " +
                    "count(*) as lecturas " +
                    "FROM Sonido#time(5 min) " +          // <-- corregido
                    "WHERE dom_freq_hz BETWEEN 100 AND 1000 " +
                    "AND spl_db > 120 " +
                    "AND snr_db > 10 " +
                    "HAVING count(*) >= 5 " +
                    "OUTPUT LAST EVERY 1 min";

    public static final String ALERTA_CETACEOS_BARCOS =
            "@name('AlertaCetaceosBarcos') " +
                    "insert into AlertaCetaceosBarcos " +
                    "SELECT c.id as sensor_cetaceo, " +
                    "t.id as sensor_trafico, " +
                    "c.lat, c.lon, " +
                    "c.spl_db as spl_cetaceo, " +
                    "t.spl_db as spl_trafico, " +
                    "'REDIRIGIR TRAFICO MARITIMO' as accion " +
                    "FROM pattern [ " +
                    "every c = Sonido(dom_freq_hz BETWEEN 10 AND 10000 " +
                    "AND spl_db > 110 AND snr_db > 15) " +
                    "-> (t = Sonido(dom_freq_hz BETWEEN 100 AND 1000 " +
                    "AND spl_db > 120 " +
                    "AND Math.abs(t.lat - c.lat) <= 1 " +
                    "AND Math.abs(t.lon - c.lon) <= 1) " +
                    "where timer:within(5 min)) " +
                    "]";

    public static final String ALERTA_CONTAMINACION_ACUSTICA =
            "@name('AlertaContaminacionAcustica') " +
                    "insert into AlertaContaminacionAcustica " +
                    "SELECT id, lat, lon, " +
                    "max(spl_db) as pico_spl, " +
                    "avg(spl_db) as media_spl, " +
                    "count(*) as eventos_ruidosos " +
                    "FROM Sonido#time(10 min) " +
                    "WHERE spl_db > 150 " +
                    "HAVING avg(spl_db) > 140 AND count(*) >= 4 " +
                    "OUTPUT SNAPSHOT EVERY 2 min";

    public static final String ALERTA_MAREMOTO =
            "@name('AlertaMaremoto') " +
                    "insert into AlertaMaremoto " +
                    "SELECT p.id as sensor_presion, " +
                    "t.id as sensor_temp, " +
                    "p.lat, p.lon, " +
                    "p.pressure_dbar as presion_inicial, " +
                    "t.temp_c as temperatura, " +
                    "'ALERTA MAREMOTO HACIA CIUDAD' as mensaje " +
                    "FROM pattern [ " +
                    "every p = Presion(pressure_dbar < 50) " +
                    "-> t = Temperatura(temp_c < 5 " +
                    "AND Math.abs(t.lat - p.lat) <= 2 " +
                    "AND Math.abs(t.lon - p.lon) <= 2) " +
                    "where timer:within(3 min) " +
                    "]";

    public static final String ALERTA_AGUA_CONTAMINADA =
            "@name('AlertaAguaContaminada') " +
                    "insert into AlertaAguaContaminada " +
                    "SELECT s.id, s.lat, s.lon, " +
                    "s.sal_psu, t.temp_c, " +
                    "'AGUAS CONTAMINADAS' as alerta " +
                    "FROM pattern [ " +      // <-- eliminado el #time(5 min) fuera del pattern
                    "every s = Salinidad(sal_psu < 20 OR sal_psu > 40) " +
                    "-> t = Temperatura(temp_c > 28 " +
                    "AND Math.abs(t.lat - s.lat) <= 1 " +
                    "AND Math.abs(t.lon - s.lon) <= 1) " +
                    "where timer:within(5 min) " +
                    "]";

    public static final String ALERTA_AIRE_CONTAMINADO =
            "@name('AlertaAireContaminado') " +
                    "insert into AlertaAireContaminado " +
                    "SELECT id, lat, lon, " +
                    "avg(airQuality) as calidad_media, " +
                    "min(airQuality) as peor_lectura, " +
                    "count(*) as num_lecturas " +
                    "FROM eNose#time_batch(3 min) " +
                    "HAVING avg(airQuality) < 30 " +
                    "AND count(*) >= 3";

    public static final String ALERTA_CONTAMINACION_CIUDAD =
            "@name('AlertaContaminacionCiudad') " +
                    "insert into AlertaContaminacionCiudad " +
                    "SELECT e.id, e.lat, e.lon, " +
                    "e.airQuality, " +
                    "v.direction as dir_viento, " +
                    "v.velocidad as vel_viento, " +   // <-- corregido: velocidad no velocity
                    "'ALERTA: AIRE CONTAMINADO HACIA CIUDAD' as mensaje " +
                    "FROM pattern [ " +
                    "every e = eNose(airQuality < 30) " +
                    "-> v = Viento(direction in ('S', 'SE', 'SW', 'SSE', 'SSW') " +
                    "AND velocidad > 15.0) " +         // <-- corregido: velocidad no velocity
                    "where timer:within(10 min) " +
                    "]";

    public static final String ALERTA_CONTAMINACION_PLAYAS =
            "@name('AlertaContaminacionPlayas') " +
                    "insert into AlertaContaminacionPlayas " +
                    "SELECT * " +
                    "FROM Salinidad#time(15 min) " +
                    "MATCH_RECOGNIZE ( " +
                    "PARTITION BY id " +
                    "MEASURES " +
                    "A.lat as lat_inicio, " +
                    "A.lon as lon_inicio, " +
                    "last(B.lat) as lat_actual, " +
                    "last(B.lon) as lon_actual, " +
                    "A.sal_psu as sal_inicial, " +
                    "last(B.sal_psu) as sal_actual " +
                    "PATTERN (A B{3,}) " +
                    "DEFINE " +
                    "A AS A.sal_psu < 20 OR A.sal_psu > 40, " +
                    "B AS (B.sal_psu < 20 OR B.sal_psu > 40) " +
                    "AND B.lat > prev(B.lat) " +
                    "AND B.lon > prev(B.lon) " +
                    ")";

    public static final String ALERTA_TERREMOTO =
            "@name('AlertaTerremoto') " +
                    "insert into AlertaTerremoto " +
                    "SELECT p.id as sensor_presion, " +
                    "d.id as sensor_profundidad, " +
                    "p.lat, p.lon, " +
                    "p.pressure_dbar as presion_anomala, " +
                    "d.depth_m as profundidad_anomala, " +
                    "'ALERTA TERREMOTO SUBMARINO' as mensaje " +
                    "FROM pattern [ " +
                    "every p = Presion(pressure_dbar < 30 OR pressure_dbar > 500) " +
                    "-> d = Profundidad(depth_m > 200 " +
                    "AND Math.abs(d.lat - p.lat) <= 2 " +
                    "AND Math.abs(d.lon - p.lon) <= 2 " +
                    "AND d.id != p.id) " +
                    "where timer:within(2 min) " +
                    "]";                               // <-- eliminada la subconsulta correlacionada inválida

    public static String[] getAll() {
        return new String[]{
                ALERTA_CETACEOS,
                ALERTA_TRAFICO_MARINO,
                ALERTA_CETACEOS_BARCOS,
                ALERTA_CONTAMINACION_ACUSTICA,
                ALERTA_MAREMOTO,
                ALERTA_AGUA_CONTAMINADA,
                ALERTA_AIRE_CONTAMINADO,
                ALERTA_CONTAMINACION_CIUDAD,
                ALERTA_CONTAMINACION_PLAYAS,
                ALERTA_TERREMOTO
        };
    }
}