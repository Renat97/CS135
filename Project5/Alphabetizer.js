var prompt = require('prompt-sync')({sigint: true});

var nameToAdd = [];

var count = prompt('How many names do you want to enter? ')

for(var i = 0; i < count; i++) {
nameToAdd[i] = prompt('Enter full name ' + i + ' ');
}
console.log('Thank you!');

function sortAscending(name) {

}
function sortDescending(name) {

}
function sortByFirstName(name) {

}
function sortByLastName(name) {

}
function sortByMiddleName(name) {

}
