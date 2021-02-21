var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/calculate', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('전가산기_1609134699700',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};