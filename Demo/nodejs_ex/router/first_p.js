var express = require('express');
var fs = require('fs');

var first_p = express.Router();

first_p.get('/',function(req, res){
    fs.readdir('./public/solution_edit_distance', function(err, filelist){
        if(err){
            console.log(err);
            res.status(500).send('Internet Server Error');
        }
        res.render('1st',{
            topics : filelist,
            list_length : filelist.length
        });
    });
});

module.exports = first_p;