var express = require('express'), //Carga de librerías que necesita
    cors = require('cors'),
    bodyParser = require('body-parser');
var resources = require("../resources/model");
var sensorRoutes = require("../routers/sensors");

var app = express();
app.use(cors());

app.use(bodyParser.json());

app.use('/Sonobuoys', sensorRoutes);

module.exports = app;