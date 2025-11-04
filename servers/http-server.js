var express = require('express'), //Carga de librerías que necesita
    cors = require('cors'),
    bodyParser = require('body-parser');
var resources = require("../resources/model");
var sensorRoutes = require("../routes/sensors");