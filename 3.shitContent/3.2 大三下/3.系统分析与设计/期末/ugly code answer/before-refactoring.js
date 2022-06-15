exports.printOwing = function printOwing(invoice) {
    let outstanding = 0;

    // print banner
    console.log("***********************");
    console.log("**** Customer Owes ****");
    console.log("***********************");

    // calculate outstanding
    for (const o of invoice.orders) {
        outstanding += o.amount;
    }

    // record due date
    const today = new Date();
    invoice.dueDate = new Date(today.getFullYear(),
        today.getMonth(), today.getDate() + 30);

    // print details
    console.log(`name: ${invoice.customer}`);
    console.log(`amount: ${outstanding}`);
    console.log(`due: ${invoice.dueDate.toLocaleDateString()}`);
}