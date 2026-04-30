/*const TAX_RATE = 0.05; // constant
let expenses = []; // can change
var totalExpense = 0; // function-scoped

console.log(TAX_RATE, expenses, totalExpense);*/
// 1. VARIABLES
const TAX_RATE = 0; // not required but shows const usage
let expenses = []; // dynamic list
var currency = "₹"; // var example

// 9. CLOSURE (maintains total state)
function createTotalTracker() {
    let total = 0;

    return function(amount) {
        total += amount;
        return total;
    };
}

const updateTotal = createTotalTracker();


// 2. FUNCTIONS + ARROW FUNCTION

// Add Expense (uses rest + spread + callback)
function addExpense(callback, ...newExpenses) {
    // 6. SPREAD OPERATOR
    expenses = [...expenses, ...newExpenses];

    // Update total using closure
    newExpenses.forEach(exp => updateTotal(exp.amount));

    if (callback) callback("Expense(s) added successfully!");
}

// Arrow function for displaying expenses
const displayExpenses = () => {
    console.log("\nAll Expenses:");

    expenses.forEach(({ description, amount, date }) => { // 4. OBJECT DESTRUCTURING
        console.log(`${description} - ${currency}${amount} on ${date}`);
    });
};

// Calculate total using reduce
function calculateTotal() {
    return expenses.reduce((sum, { amount }) => sum + amount, 0); // destructuring
}


// 5. ARRAY METHODS

// Map → descriptions
function getDescriptions() {
    return expenses.map(exp => exp.description);
}

// Filter → expenses above ₹20
function filterExpenses(minAmount = 20) {
    return expenses.filter(exp => exp.amount > minAmount);
}


// 7. CALLBACK FUNCTION
function showMessage(message) {
    console.log(message);
}


// 8. PROMISE (simulate API fetch)
function fetchInitialExpenses() {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve([
                { description: "Groceries", amount: 50, date: "2026-04-01" },
                { description: "Bus Ticket", amount: 15, date: "2026-04-02" }
            ]);
        }, 1000);
    });
}


// 10. ASYNC/AWAIT
async function initApp() {
    console.log("Fetching initial expenses...");

    const data = await fetchInitialExpenses();

    // Add fetched data
    addExpense(showMessage, ...data);

    displayExpenses();

    console.log("\nDescriptions:", getDescriptions());

    console.log("\nFiltered (>20):", filterExpenses());

    console.log("\nTotal Expenses:", currency + calculateTotal());
}


// RUN APP
initApp();


// Example: Adding multiple expenses manually
addExpense(showMessage,
    { description: "Coffee", amount: 25, date: "2026-04-03" },
    { description: "Snacks", amount: 10, date: "2026-04-03" }
);