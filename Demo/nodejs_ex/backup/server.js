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
// 선택 박스에서 과제 선택하고 submit시 실행...
// 해당되는 task의 솔루션을 반환
/* 
res.render('1st_index',{
    topics : filelist,
    list_length : filelist.length
}); 
*/
////////////////////////////////////////////////////////////
///선택해야 할 과제가 늘어날 시, 아래에 라우팅 선언을 추가한다.
var first_p = require('./router/first_p');
app.use('/',first_p);
////////////////////////////////////////////////////////////
var second_p = require('./router/second_p');
app.get('/second_p', second_p.page);
var third_p = require('./router/third_p');
app.get('/task_check', third_p.page);
/* var fourth_p = require('./router/fourth_p');
app.get('/fourth_p', fourth_p.page); */
app.post('/fourth_p',function(req,res){
    var task = req.body.values;
    //console.log(task);
    var data_array = new Array()
    data_array = task.split('//$//');
    // 값이 너무 커서 에러가 뜸.. 
    // 경로만 던져주거나 하는 식으로 바꿔야할것 같음.
    res.render('4th',{
        contents : data_array
    });
});
var threshold_p = require('./router/threshold_p');
app.get('/threshold', threshold_p.page);
////////////////////////////////////////////////////////////
var server = app.listen(3000, function(){
    console.log("Express server has started on port 3000")
});