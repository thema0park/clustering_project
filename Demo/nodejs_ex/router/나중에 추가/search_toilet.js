var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/search_toilet', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('원천관_화장실_찾기_1609134699729',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};