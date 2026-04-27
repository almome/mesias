var express = require('express'),
    router = express.Router(),
    resources = require('../resources/model');

const mongoose = require('mongoose');

// Modelo de MongoDB
/** Eventos complejos del CEP (Java → RabbitMQ → Node-RED → POST). Campos variables según la consulta EPL. */
const ComplexEventSchema = new mongoose.Schema({
    ts: { type: Date, default: Date.now },
    EventoComplejo: { type: String, required: true }
}, { strict: false, collection: "complex_events" });

const ComplexEvent = mongoose.models.ComplexEvent || mongoose.model("ComplexEvent", ComplexEventSchema);

mongoose.connect("mongodb://localhost:27017/ocean_iot")
    .then(()=> console.log("MongoDB connected"))
    .catch(err => console.log("MongoDB error:", err));

// POST: eventos complejos detectados por el CEP (Node-RED reenvía el JSON de OutputMessages)
router.route('/complexEvents').post(async function (req, res, next) {
    try {
        const data = typeof req.body === "object" && req.body !== null ? { ...req.body } : {};

        if (!data.EventoComplejo || String(data.EventoComplejo).trim() === "") {
            res.status(400).send("Missing EventoComplejo");
            return next();
        }

        if (!data.ts) {
            data.ts = new Date();
        } else if (!(data.ts instanceof Date)) {
            data.ts = new Date(data.ts);
        }

        const saved = await ComplexEvent.create(data);
        console.log("Inserted complex event:", saved.EventoComplejo, saved._id);
        res.status(201).json({ ok: true, id: String(saved._id) });
    } catch (e) {
        console.error("Complex event insert error:", e);
        res.status(400).send("Error saving complex event");
    }
    next();
});

//Devuelve un lista de las sonoboyas que hay actualmente en funcionamiento
router.route('/LatestsEvents').get(async function (req, res, next){
    try {
        // segundos desde query (por defecto 60)
        const seconds = parseInt(req.query.seconds) || 30;

        // fecha límite (ahora - seconds)
        const fromDate = new Date(Date.now() - seconds * 1000);

        const events = await ComplexEvent.find({
            ts: { $gte: fromDate }
        }).sort({ ts: -1 }); // opcional: más recientes primero

        res.status(200).json({
            ok: true,
            count: events.length,
            data: events
        });

    } catch (e) {
        console.error("Complex event fetch error:", e);
        res.status(500).send("Error fetching complex events");
    }
    next();
});

module.exports = router;