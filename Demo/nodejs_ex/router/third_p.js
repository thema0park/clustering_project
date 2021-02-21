var express = require('express');
var fs = require('fs');

module.exports.page = function(req, res){
    var task = req.query.task;
    //console.log("서버.js : ", task);
    // 해당 task에 알맞는 편집 거리와 솔루션 전부 불러오기.
    // 1. 편집 거리 json 파일 읽어오기 //
    var j_filepath = './public/solution_edit_distance/'+ task + '.json';
    var jsonFile = fs.readFileSync(j_filepath, 'utf8');
    var jsonData = JSON.parse(jsonFile);
    //console.log(jsonData.data[0].length);
    var distance_matrix = new Array(jsonData.data[0].length);
    var max_array = new Array(distance_matrix.length);
    for (var x = 0; x < distance_matrix.length; x++) {
        distance_matrix[x] = jsonData.data[x];
        max_array[x] = Math.max.apply(null, distance_matrix[x]);
    }
    //// 2. 최대값 추출 (slide 최댓값) ////
    var max = Math.max.apply(null, max_array);
    //////////////////////////////////////
    // console.log("distance load OK..");
    res.render('3rd',{
        //전달할 데이터들
        current_task : task,
        //edit_distance : distance_matrix,
        slide_max : max
    });
}