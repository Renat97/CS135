// module require
var prompt = require('prompt-sync')({sigint: true});
// declare variables
var names = [];
var nameToAdd = [];
// prompt to enter in
var count = prompt('How many names do you want to enter? ')
// read in the name
for(var i = 0; i < count; i++) {
nameToAdd[i] = prompt('Enter full name ' + i + ' ');
}
console.log('Thank you!');

// function calls with implementations below
sortAscending(nameToAdd);
sortDescending(names);
sortByFirstName(names);
sortByLastName(names);

function sortAscending(names) {
for(var i = 0; i < nameToAdd.length; i++) {
names.push(nameToAdd[i]);
}
names.sort();
console.log(names);
names.length = 0;
}
// descending is b - a
function sortDescending(names) {
for(var i = 0; i < nameToAdd.length; i++) {
names.push(nameToAdd[i]);
}
names.sort(function(a,b) {
  return b - a;
});
console.log(names);
names.length = 0;
}
/*
function resetArr(arr) {
  arr = [];
}
*/
function sortByFirstName(names) {
sortAscending(names);
names.length = 0;
}
function sortByLastName(names) {
for(var i = 0; i < nameToAdd.length; i++) {
var last = nameToAdd[i].toString().split(' ')[1];
var first = nameToAdd[i].toString().split(' ')[0];
names.push(last + ' ' + first);
}
names.sort(function(a,b) {
  return b - a;
});
console.log(names);
names.length = 0;
}
