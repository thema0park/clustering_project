var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./public/test_result/run', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        //console.log(filelist)
        res.render('run_page',{
            topics : filelist,
            topics_length : filelist.length
        });
    });
};