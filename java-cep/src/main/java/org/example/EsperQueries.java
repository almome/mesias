package org.example;

public class EsperQueries {

    public static final String ALERTA_CETACEOS =
            "@name('AlertaCetaceos') " +
                    "insert into AlertaCetaceos " +
                    "SELECT source, id, lat, lon, dom_freq_hz, spl_db, snr_db, " +
                    "avg(spl_db) as avg_spl, count(*) as num_detecciones " +
                    "FROM Sonido#time_batch(20) " +
                    "WHERE dom_freq_hz BETWEEN 300 AND 500 " +
                    "AND spl_db >= 110 " +
                    "AND snr_db >= 15 " +
                    "HAVING count(*) >= 3";

    public static final String ALERTA_TRAFICO_MARINO =
            "@name('AlertaTraficoMarino') " +

                    "insert into AlertaTraficoMarino " +
                    "SELECT source, id, lat, lon, " +
                    "avg(dom_freq_hz) as freq_media, " +
                    "avg(spl_db) as spl_medio, " +
                    "count(*) as lecturas " +
                    "FROM Sonido#time(60) " +          // <-- corregido
                    "WHERE dom_freq_hz BETWEEN 500 AND 800 " +
                    "AND spl_db > 120 " +
                    "AND snr_db > 10 " +
                    "HAVING count(*) >= 5 " +
                    "OUTPUT LAST EVERY 10 seconds";

    public static final String ALERTA_CETACEOS_BARCOS =
            "@name('AlertaCetaceosBarcos') " +

                    "insert into AlertaCetaceosBarcos " +
                    "SELECT c.source as source, c.id as sensor_cetaceo, " +
                    "t.id as sensor_trafico, " +
                    "c.lat as lat, c.lon as lon, " +
                    "c.avg_spl as spl_cetaceo, " +
                    "t.spl_medio as spl_trafico, " +
                    "'REDIRIGIR TRAFICO MARITIMO' as accion " +
                    "FROM pattern [ " +
                    "every c = AlertaCetaceos -> " +
                    "(t = AlertaTraficoMarino( " +
                        "Math.abs(t.lat - c.lat) <= 1 " +
                        "AND Math.abs(t.lon - c.lon) <= 1) " +
                    "where timer:within(1 min)) " +
                    "]";

    public static final String ALERTA_CONTAMINACION_ACUSTICA =
            "@name('AlertaContaminacionAcustica') " +

                    "insert into AlertaContaminacionAcustica " +
                    "SELECT source, id, lat, lon, " +
                    "max(spl_db) as pico_spl, " +
                    "avg(spl_db) as media_spl, " +
                    "count(*) as eventos_ruidosos " +
                    "FROM Sonido#time(30) " +
                    "WHERE spl_db > 150 " +
                    "HAVING avg(spl_db) > 140 AND count(*) >= 3 " +
                    "OUTPUT SNAPSHOT EVERY 10 seconds";

    public static final String ALERTA_MAREMOTO =
            "@name('AlertaMaremoto') " +

                    "insert into AlertaMaremoto " +
                    "SELECT p.source as source, p.id as sensor_presion, " +
                    "t.id2 as sensor_temblor, " +
                    "p.lat as lat, p.lon as lon, " +
                    "p.pressure_dbar as presion_inicial, " +
                    "'ALERTA MAREMOTO HACIA CIUDAD' as mensaje " +
                    "FROM pattern [ " +
                    "every t = AlertaTerremoto " +
                    "-> p = Presion(pressure_dbar < 5 " +
                    "AND Math.abs(t.lat - p.lat) <= 2 " +
                    "AND Math.abs(t.lon - p.lon) <= 2) " +
                    "where timer:within(1 min) " +
                    "]";

    public static final String ALERTA_AGUA_CONTAMINADA =
            "@name('AlertaAguaContaminada') " +

                    "insert into AlertaAguaContaminada " +
                    "SELECT s.source as source, s.id, s.lat as lat, s.lon as lon, " +
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
                    "SELECT source, id, lat, lon, " +
                    "avg(airQuality) as calidad_media, " +
                    "min(airQuality) as peor_lectura, " +
                    "count(*) as num_lecturas " +
                    "FROM eNose#time_batch(10) " +
                    "HAVING avg(airQuality) < 30 ";

    public static final String ALERTA_CONTAMINACION_CIUDAD =
            "@name('AlertaContaminacionCiudad') " +

                    "insert into AlertaContaminacionCiudad " +
                    "SELECT e.source as source, e.id, e.lat as lat, e.lon as lon, " +
                    "e.calidad_media, " +
                    "v.direction as dir_viento, " +
                    "v.velocity as vel_viento, " +   // <-- corregido: velocity no velocity
                    "'ALERTA: AIRE CONTAMINADO HACIA CIUDAD' as mensaje " +
                    "FROM pattern [ " +
                    "every e = AlertaAireContaminado " +
                    "-> v = Viento(direction in ('N', 'NE', 'NNE', 'NNW') " +
                    "AND velocity > 15.0) " +         // <-- corregido: velocity no velocity
                    "where timer:within(5 min) " +
                    "]";

    public static final String ALERTA_CONTAMINACION_PLAYAS =
            "@name('AlertaContaminacionPlayas') " +

                    "insert into AlertaContaminacionPlayas " +
                    "SELECT * " +
                    "FROM Salinidad#time(15 min) " +
                    "MATCH_RECOGNIZE ( " +
                    "PARTITION BY id " +
                    "MEASURES " +
                    "A.source as source, "+
                    "A.lat as lat_inicio, " +
                    "A.lon as lon_inicio, " +
                    "last(B.lat) as lat, " +
                    "last(B.lon) as lon, " +
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
                    "SELECT p.source as source, p.id as id1, " +
                    "d.id as id2, " +
                    "p.lat as lat, p.lon as lon, " +
                    "'ALERTA TERREMOTO SUBMARINO' as mensaje " +
                    "FROM pattern [ " +
                    "(every p = Sonido(dom_freq_hz BETWEEN 10 AND 20" +
                            "AND spl_db > 150 AND snr_db > 10)" +
                    "-> d = Sonido(dom_freq_hz BETWEEN 10 AND 20" +
                            "AND spl_db > 150 AND snr_db > 10 AND id != p.id)) " +
                    "where timer:within(30) " +
                    "]";                             

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

    public static String[] getAllInContext(String contextName) {
        String[] base = getAll();
        String[] out = new String[base.length];
        for (int i = 0; i < base.length; i++) {
            out[i] = addContextAfterAnnotations(base[i], contextName);
        }
        return out;
    }

    private static String addContextAfterAnnotations(String epl, String contextName) {
        if (epl == null) {
            return null;
        }
        String s = epl.trim();
        if (s.isEmpty()) {
            return s;
        }

        // If already has a context clause, don't add another.
        int firstTokenEnd = 0;
        while (firstTokenEnd < s.length() && !Character.isWhitespace(s.charAt(firstTokenEnd))) {
            firstTokenEnd++;
        }
        String firstToken = s.substring(0, firstTokenEnd);
        if ("context".equalsIgnoreCase(firstToken)) {
            return s;
        }

        // Esper requires annotations to come first. Insert "context X" after leading annotations.
        int i = 0;
        while (i < s.length()) {
            while (i < s.length() && Character.isWhitespace(s.charAt(i))) {
                i++;
            }
            if (i >= s.length() || s.charAt(i) != '@') {
                break;
            }
            while (i < s.length() && !Character.isWhitespace(s.charAt(i))) {
                i++;
            }
        }

        String annotations = s.substring(0, i).trim();
        String rest = s.substring(i).trim();
        if (annotations.isEmpty()) {
            return "context " + contextName + " " + rest;
        }
        if (rest.isEmpty()) {
            return annotations + " context " + contextName;
        }
        return annotations + " context " + contextName + " " + rest;
    }
}