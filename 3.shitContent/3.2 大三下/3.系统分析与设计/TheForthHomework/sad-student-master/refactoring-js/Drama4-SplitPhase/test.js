const Statement = require('./statement.js');
const fs = require('fs');
const invoices = JSON.parse(fs.readFileSync('../invoices.json'));
const plays = JSON.parse(fs.readFileSync('../plays.json'));
console.log(Statement.statement(invoices , plays));