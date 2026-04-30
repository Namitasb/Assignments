function processNumbers(arr) {
    return arr
        .filter(num => num % 2 === 0)
        .map(num => num * 2)
        .reduce((sum, num) => sum + num, 0);
}

console.log(processNumbers([1, 2, 3, 4, 5, 6]));