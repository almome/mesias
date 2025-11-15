var express = require('express'),
    router = express.Router(),
    resources = require('./../resources/model');

const mongoose = require('mongoose');

// Modelo de MongoDB
const TelemetrySchema = new mongoose.Schema({
    id: String,
    ts: Date,
    lat: Number,
    lon: Number,
    temp_c: Number,
    sal_psu: Number,
    pressure_dbar: Number,
    depth_m: Number,
    dom_freq_hz: Number,
    spl_db: Number,
    snr_db: Number,
    batt_pct: Number,
    rssi_dbm: Number,
    status: String
}, { collection: "telemetry" });

const Telemetry = mongoose.model("Telemetry", TelemetrySchema);

mongoose.connect("mongodb://localhost:27017/ocean_iot")
    .then(()=> console.log("MongoDB connected"))
    .catch(err => console.log("MongoDB error:", err));



//Devuelve la base de datos completa con todas las sonoboyas
router.route('/').get(function (req, res, next) {
    res.send(resources.sonobuoysDataBase);
    next();
});

//Post para actualizar la base de datos de sonoboyas
router.route('/updateSonobuoys').post(function (req, res, next) {
    resources.sonobuoysDataBase = req.body;
    console.log(req.body);
    res.status(200).send("Sonobuoys updated");
    next();
});

//Post para actualizar el estado de sonoboyas
router.route('/updateStatus').post(function (req, res, next) {
    const {id, status} = req.body;
    const buoy = resources.sonobuoysDataBase.sonobuoys.find(b=>b.id === id);

    if (!id || !status) {
        return res.status(400).send("Missing id or status");
    }
    if(!buoy) {
        return res.status(404).send("Sonobuoy not found");
    }

    buoy.status = status;

    console.log(`Updated ${id} with status ${status}`);
    res.status(200).send("Sonobuoys status updated");
    next();
});

module.exports = router;