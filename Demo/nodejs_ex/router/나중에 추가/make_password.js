var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    fs.readdir('./test_result/make_password', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('암호문_만들기_1609134762644',{
            topics : filelist,
            list_length : filelist.length
        });
    });
};