var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/mabangjin', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('마방진_1609134762577',{
            topics : filelist,
            list_length : filelist.length
        });
    });
}