function delayCallback(callback, delay) {
    setTimeout(callback, delay);
}

// Example
delayCallback(() => console.log("Executed after delay"), 2000);