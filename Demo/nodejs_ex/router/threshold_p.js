const { Console } = require('console');
var express = require('express');
var fs = require('fs');
const { data } = require('jquery');

module.exports.page = function(req, res){
     // distance_matrix는 들어가야함 -> cluster 안의 개체와 새로운 개체간 edit_distance를 비교해서 
     // threshold 보다 작으면 cluster에 추가해야하기 때문에
    var main_task = req.query.task;
    // 해당 task에 알맞는 편집 거리와 솔루션 전부 불러오기.
    // 1. 편집 거리 json 파일 읽어오기 //

    var j_filepath = './public/solution_edit_distance/'+ main_task + '.json';
    var jsonFile = fs.readFileSync(j_filepath, 'utf8');
    var jsonData = JSON.parse(jsonFile);
    var Q = new Array(jsonData.data.length);  // Q is distance_matrix

    var tmpQ = new Array(Q.length);
    for (var x = 0; x < Q.length; x++) {
        Q[x] = jsonData.data[x];
        tmpQ[x] = Q[x].slice(); // distance matrix deepcopy
    }
    ////////////////////////////////////////////////////
    var threshold = Number(req.query.threshold);
    // 2. 클러스터 시작
    var real_cluster = new Array();
    var cnt = 0;
    var INFINITY = 2147483647; 
    while (Q.length != 0){
        var d = INFINITY; //2147483647;
        var index_row = -1;
        var index_col = -1;
        index = find_min(Q);
        index_row = index.row;
        index_col = index.col;
        if (d > threshold) {  // sig간 편집 거리가(답지와 학생들의 솔루션과의 유사도가) 
            break;                      // 최대 유사도(threshold)보다 
        }                               // 높으면 while문 탈출.(학생들이 낸 답중 가장 정답과 
                                        // 유사한 답의 편집거리가 
                                        // 스탭이 정한 유사도 값보다 크다면 
                                        // 학생들이 해당 문제를 어려워한다고 판단하고 
                                        // 스탭들에게 알리기 위해 while문 탈출)
        real_cluster = merge(real_cluster, tmpQ, threshold, index_row, index_col)
        Q[index_row][index_col] = INFINITY;
        Q[index_col][index_row] = INFINITY;
    }

    // 클러스터링된 개체를 제외한 나머지 개체 추가 생성
    var tmp = new Array()
    for(var x = 0 ; x < real_cluster.length; x++){
        for(var y = 0; y < real_cluster[x].length; y++){
            tmp.push(real_cluster[x][y])
        }
    }
    for (var x = 0 ; x < Q.length ; x++){
        if (tmp.includes(x)==false){
            real_cluster.push([x]);
        }
    }
    
    // 클러스터에 따라 코드를 불러와 병합하고 반환한다.
    // 이 부분에서 새롭게 저장한 json 파일을 사용해 파일 경로를 생성한다.
    var j_filepath = './public/solution_name/'+ main_task + '.json';
    var jsonFile = fs.readFileSync(j_filepath, 'utf8');
    var jsonData = JSON.parse(jsonFile);
    filename = Object.values(jsonData)

    var path = new Array(filename.length);
    for (var i = 0; i < filename.length ; i++ ){
        path[i] = './public/test_set/'+ main_task + '/' + filename[i] + '/source/main_pre_processing.c';
    }
    // 2. 경로만 저장해서 쏴주기
    var real_contents_path = new Array(real_cluster.length);
    for (var i = 0; i < real_cluster.length; i++){
        var tmp = new Array(real_cluster[i].length);
        for (var j = 0; j < real_cluster[i].length; j++){
            if (j < real_cluster[i].length-1){
                tmp[j] = path[real_cluster[i][j]];
            }
            else if (j == real_cluster[i].length-1){
                tmp[j] = path[real_cluster[i][j]];
            }
        }
        real_contents_path[i] = tmp;
    }
    ///////////////////////////////////////////////////
    // 1. path 경로를 참조해 original code를 읽어온다.
    var data = new Array(path.length);
    for (var i = 0; i< path.length; i++){
        data[i] = fs.readFileSync(path[i], 'utf8');
    }
    // 클러스터 값을 인덱스로 사용해서 실제 코드 경로를 불러온다.
    var real_contents = new Array(real_cluster.length);
    for (var i = 0; i < real_cluster.length; i++){
        var tmp = new Array(real_cluster[i].length);
        ///////////////////////////////////////////////
        real_contents[i] = data[real_cluster[i][0]];
        /////////////////여기까지 맞음/////////////////
        for (var j = 0; j < real_cluster[i].length; j++){
            if (j < real_cluster[i].length-1){
                tmp[j] = data[real_cluster[i][j]];
            }
            else if (j == real_cluster[i].length-1){
                tmp[j] = data[real_cluster[i][j]];
            }
        } 
        real_contents[i] = tmp;
    }
    let json = {
        r_c_data : real_contents,
        r_c_path : real_contents_path
    };
    res.send(json);


    function find_min(Q){
        for (var i = 0; i < Q.length ;i++) {
            for (var j = i+1; j < Q[i].length ; j++) {
                if(i == j) {
                    continue;
                }
                else if (Q[i][j] <= d) {
                    d = Q[i][j];
                    index_row = i;
                    index_col = j;
                }
            }
        }
        return{
            row: index_row,
            col: index_col
        }
    }
    
    function make_min_Q(min_array, min_val){
        
    }

    function merge(cluster, distance_matrix, threshold, index_i, index_j){
        // 각 cluster가 추가할 개체를 갖고 있는지 기록하기 위한 배열 선언과 초기화
        search_cluster = new Array(cluster.length);
        for(var i = 0; i < cluster.length; i++){
            search_cluster[i] = false;
        }
        for (var x = 0 ; x < cluster.length ; x++){
            flag1 = false;
            flag2 = false;
            // 1. 어떤 한 cluster에 index_i와 index_j가 동시에 있다면 추가할 필요가 없으니 return cluster
            if ((cluster[x].includes(index_i)==true) && (cluster[x].includes(index_j)==true)){
                return cluster;
            }
            // 2. index_i와 index_j를 포함하는 cluster가 존재하지 않는다면
            if ((flag1 == false) && ((cluster[x].includes(index_i)) == false)) { // index_i가 cluster[x]에 존재하지 않는다.
                flag1 = true;
            }
            if ((flag2 == false) && ((cluster[x].includes(index_j)) == false)) { // index_j가 cluster[x]에 존재하지 않는다.
                flag2 = true;
            }
            // 2-1. 지금 스캔하는 cluster에 해당하는 배열값을 true로 바꾸고 다음 cluster 탐색
            if ((flag1 == true) && (flag2 == true)){
                search_cluster[x] = true;
                continue
            }
             // 3.
             // 들어오는 값 => [ i와j간 편집거리, index_i, index_j ]
             // 각 cluster을 스캔해서 cluster 중 index_i를 갖고 있는 cluster이 있다면,
             // cluster 안의 개체들과 index_j와 edit_distance를 threshold와 비교한다.
             // 하나라도 threshold보다 크다면 추가하지 않는다. --> 이 부분이 나중에 cluster 갯수 때문에 바뀔 수 있음.
            if (cluster[x].includes(index_i)==true){
                // 서로 다른 클러스터에 존재하고 있는지 확인
                for (var y = 0; y < cluster.length; y++){
                    if (x==y){
                        continue
                    }
                    else if ((cluster[y].includes(index_j)==true)){
                        // 만약 다른 클러스터에 index_j가 있으면,
                        // 그 index_i가 있는 cluster와 index_j가 있는 cluster의 각 요소 간의 distance 평균을 구한다.
                        var total = 0;
                        var length = 0;
                        for(var i = 0; i < cluster[x].length; i++){
                            for(var j = 0; j < cluster[y].length; j++){
                                total += distance_matrix[cluster[x][i]][cluster[y][j]];
                                length += 1;
                            }
                        }
                        // 평균값이 threshold보다 작으면, cluster[x]에 추가하고,
                        // 병합시킨 cluster[y]는 빈 배열로 초기화한다.
                        distance_avg = total/length;
                        if(distance_avg <= threshold){
                            for(var k = 0; k < cluster[y].length; k++){
                                cluster[x].push(cluster[y][k]);
                            }
                            cluster.splice(y,1);
                            return cluster;
                        }
                        else{
                            return cluster;
                        }
                    }
                }
                 // 해당 cluster 내부를 스캔
                 // 배열 scan_array에 스캔하면서 편집거리가 threshold보다 작다면 false로 값을 저장한다.
                 // cluster 내의 개체(복수)와 신규 개체(단일)간 edit distance를 테이블에서 꺼내와 threshold를 모두 비교
                 // 그 이후, cluster 내부 개체와 신규 개체 간 편집 거리를 비교하고 하나라도 threshold보다 크다면 
                 // 해당 cluster에 신규 개체를 추가하지 않음.
                var scan_array = new Array(cluster[x].length);
                for (var z = 0 ; z < cluster[x].length ; z++){
                    if (x==z){
                        continue;
                    }
                    // 거리 행렬은 대칭 행렬이기 때문에 인덱스가 서로 바뀌어도 같은 값을 가져온다.
                    else if (distance_matrix[cluster[x][z]][index_j] > threshold){
                        scan_array[z] = true;
                        break;
                    }
                    else{
                        scan_array[z] = false;
                    }
                }
                 // scan_array에 값을 보고 값이 모두 false라면 해당 클러스터에 index_j를 추가한다.
                if ((scan_array.includes(true)) == false){
                    cluster[x].push(index_j);
                    return cluster;
                }
            }
            else if (cluster[x].includes(index_j)==true){
                // 서로 다른 클러스터에 존재하고 있는지 확인
                for (var y = 0; y < cluster.length; y++){
                    if (x==y){
                        continue
                    }
                    else if ((cluster[y].includes(index_i))==true){
                        // 만약 다른 클러스터에 index_i가 있으면,
                        // 그 index_j가 있는 cluster와 index_i가 있는 cluster의 각 요소 간의 distance 평균을 구한다.
                        var total = 0;
                        var length = 0;
                        for(var i = 0; i < cluster[x].length; i++){
                            for(var j = 0; j < cluster[y].length; j++){
                                total += distance_matrix[cluster[x][i]][cluster[y][j]];
                                length += 1;
                            }
                        }
                        // 평균값이 threshold보다 작으면, cluster[x]에 추가하고,
                        // 병합시킨 cluster[y]는 빈 배열로 초기화한다.
                        distance_avg = total/length;
                        if(distance_avg <= threshold){
                            for(var k = 0; k < cluster[y].length; k++){
                                cluster[x].push(cluster[y][k]);
                            }
                            cluster.splice(y,1);
                            return cluster;
                        }
                        else{
                            return cluster;
                        }
                    }
                }
                 // 해당 cluster 내부를 스캔
                 // 배열 scan_array에 스캔하면서 편집거리가 threshold보다 작다면 false로 값을 저장한다.
                 // cluster 내의 개체(복수)와 신규 개체(단일)간 edit distance를 테이블에서 꺼내와 threshold를 모두 비교
                 // 그 이후, 하나라도 threshold가 크다면 해당 cluster에 신규 개체를 추가하지 않음.
                var scan_array = new Array(cluster[x].length);
                for (var z = 0 ; z < cluster[x].length ; z++){
                    if (x==z){
                        continue;
                    }
                    else if (distance_matrix[cluster[x][z]][index_i] > threshold){
                        scan_array[z] = true;
                        break;
                    }
                    else{
                        scan_array[z] = false;
                    }
                }
                // scan_array에 값을 보고 값이 모두 false라면 해당 클러스터에 index_i를 추가한다.
                if ((scan_array.includes(true)) == false){
                    cluster[x].push(index_i);
                    return cluster;
                }
            }
        }
        cnt = 0;
        // 2-2. 모든 cluster에 index_i와 index_j가 존재하지 않는다면,
        for (var x = 0; x < search_cluster.length; x++){
            var tmp = search_cluster[x]
            if (tmp == false) {
                break;
            }
            else {
                cnt += 1;
            }
        }
        // 2-3. 새로운 클러스터 형성
        if (cnt == cluster.length){
            cluster.push([index_i, index_j]);
            return cluster;
        }
        else{
            return cluster;
        }
    }
    /////////////////////////////merge함수 끝/////////////////////////////
}