var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    dir_name = fs.readdirSync('./public/test_result/trace');
    var path = new Array(dir_name.length); //70개 배열 생성
    for (var i = 0; i < dir_name.length ; i++ ){
        tmp = './public/test_result/trace/' + dir_name[i];
        dir_num_name = fs.readdirSync(tmp);
        path[i] = new Array(dir_num_name.length);
        for(var j = 0; j < dir_num_name.length; j++){
            path[i][j] = tmp + '/' + String(j) + '/result.txt';
        }
    }
    var data = new Array(dir_name.length);
    for (var i = 0; i < dir_name.length ; i++ ){
        data[i] = new Array(dir_num_name.length);
        for (var j = 0; j < dir_num_name.length; j++){
            data[i][j] = fs.readFileSync(path[i][j],'utf-8');
        }
    }

    res.render('trace_page',{
        topics : data,
        topics_length : data.length,
        i_length : dir_name.length,
        j_length : dir_num_name.length
    });
};