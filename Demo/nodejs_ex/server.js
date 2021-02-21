const { request, response } = require('express');
var express = require('express');
var fs = require('fs');
var app = express();
var bodyParser = require('body-parser')

app.use(bodyParser.urlencoded({extended:false}))
app.set('views', __dirname + '/views'); //html 위치  정의
app.set('view engine', 'ejs');
app.engine('html', require('ejs').renderFile);
app.use(express.static('public'));
////////////////////////////////////////////////////////////
var first_p = require('./router/first_p');
app.use('/',first_p);
var second_p = require('./router/second_p');
app.get('/second_p', second_p.page);
var third_p = require('./router/third_p');
app.get('/task_check', third_p.page);
app.post('/fourth_p',function(req,res){
    var task = req.body.values;
    //console.log(task.length);
    var path = new Array();
    path = task.split(','); // 경로까지 파싱 완료..
    var data = new Array(path.length);
    for (var i = 0; i< path.length; i++){
        data[i] = fs.readFileSync(path[i], 'utf8'); // 데이터 읽어오기
    }
    //console.log(data);
    res.render('4th',{
        contents : data
    });
});
var threshold_p = require('./router/threshold_p');
app.get('/threshold', threshold_p.page);
////////////////////////////////////////////////////////////
var server = app.listen(3000, function(){
    console.log("Express server has started on port 3000")
});