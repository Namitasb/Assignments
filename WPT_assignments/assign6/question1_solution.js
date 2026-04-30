const TAX_RATE = 0.1; // constant

let cart = []; // can change

function addItem(name, price) {
    var item = { name, price }; // function-scoped
    cart.push(item);
}

function calculateTotal() {
    let total = 0;
    for (let item of cart) {
        total += item.price;
    }
    return total + (total * TAX_RATE);
}

// Example
addItem("Shirt", 500);
addItem("Shoes", 1000);
console.log(calculateTotal());