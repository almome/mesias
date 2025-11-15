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

module.exports = router;