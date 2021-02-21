var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/Run_length_Encoding', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('Run_length_Encoding_1609134762612',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};