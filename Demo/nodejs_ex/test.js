var express = require('express');
const fs = require('fs');

var tmp = new Array();
for(var i = 0; i < 10 ; i++){
    tmp.push(i);
}
console.log(tmp.length);
console.log(tmp.shift());
console.log(tmp.length);
console.log(tmp.shift());
console.log(tmp.length);
console.log(tmp.shift());
console.log(tmp.length);
console.log(tmp.shift());
console.log(tmp.length);
