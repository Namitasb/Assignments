const book = {
    title: "The Alchemist",
    author: "Paulo Coelho",
    year: 1988,
    display() {
        console.log(`${this.title} by ${this.author}, published in ${this.year}`);
    }
};

book.display();