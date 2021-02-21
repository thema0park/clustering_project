var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/search_date', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('요일_알아보기_1609134762671',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};