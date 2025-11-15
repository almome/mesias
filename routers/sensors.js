var express = require('express'),
    router = express.Router(),
    resources = require('./../resources/model');

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