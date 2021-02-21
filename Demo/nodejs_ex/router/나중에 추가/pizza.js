var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/pizza', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('피자_조각 찾기_1609134699755',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};