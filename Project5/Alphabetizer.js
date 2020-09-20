var fs = require('fs');
console.log("Enter a file name: ");
var fileName = process.stdin.on('data', function(data) {
    return data;
});
var fileContents = fs.readFile(fileName + '.txt' , 'utf8' , function (err, data) {
  if(err) {
    console.log(err);
    return;
  }
});

console.log(fileContents);