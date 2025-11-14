var httpServer = require('./servers/http-server');
var resources = require('./resources/model');

var wotServer = httpServer.listen(8484, function () {
    console.log('HTTP server started and running at port 8484...');
});