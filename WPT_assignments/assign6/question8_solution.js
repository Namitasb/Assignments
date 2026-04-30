const cartItems = [
    { name: "Pen", price: 10 },
    { name: "Book", price: 50 }
];

const total = cartItems.reduce((sum, item) => sum + item.price, 0);
console.log(total);