var express = require('express');
var express = require('express');
var app = express();
var fs = require('fs');
var { data } = require('jquery');
var bodyParser = require('body-parser')
app.use(bodyParser.urlencoded({extended:false}))

module.exports.page = function(req, res){
    //var task = req.query.values;
    var task = req.body.values;
    console.log(task);
    var data_array = new Array();
    data_array = task.split('//$//');
    res.render('4th',{
        contents : data_array
    });
}