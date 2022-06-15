// const PrintOwing = require('./before-refactoring.js');
const PrintOwing = require('./after-refactoring.js');
const fs = require('fs');
const invoice = JSON.parse(fs.readFileSync('./invoice.json'));
console.log(PrintOwing.printOwing(invoice));