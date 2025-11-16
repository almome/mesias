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


//Devuelve un lista de las sonoboyas que hay actualmente en funcionamiento
router.route('/listSonobuoysID').get(async function (req, res, next){
    try{
        const names = await Telemetry.distinct('id');

        res.status(200).json({sonobuos: names});

    }catch (e) {
        console.error("Error getting sonobuoys names from MongoDB:", e);
        res.status(500).send("Error getting sonobuoy names");
    }
    next();
});


//Devuelve el último dato de una sonoboya en concreto
router.route('/sonobuoyLastestData').get(async function (req, res, next){
    try{
        const id = req.query.id;

        if(!id){
            res.status(400).send("No such ID");
        }

        const result =  await Telemetry.findOne({id}).sort({ts:-1});

        if(!result){
            res.status(404).send("No telemetry found for this sonobuoy.");
        }

        res.status(200).json(result);

    }catch (e) {
        console.error("Error getting lastest telemetry for this sonobuoy:", e);
        res.status(500).send("Error retrieving latest telemetry");
    }
    next();
});



//Devuelve la base de datos completa con las 100 últimas sonoboyas
router.route('/lastestData').get(async function (req, res, next) {
    const { id, limit = 100 } = req.query;

    const q = id ? {id} : {};

    const items = await Telemetry.find(q).sort({ts:-1}).limit(Number(limit));

    res.json(items);
    next();
});


//Post para actualizar la base de datos de sonoboyas
router.route('/updateSonobuoys').post(async function (req, res, next) {
    try{
        const data = req.body;

        if (!data.ts) data.ts = new Date();

        const saved = await Telemetry.create(data);

        console.log("Inserted telemetry:", saved);
        res.status(201).send("Telemetry saved");

    }catch (e){
        console.error("Telemetry insert error:", e);
        res.status(400).send("Error saving telemetry");
    }
    next();
});

module.exports = router;