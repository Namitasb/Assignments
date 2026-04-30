const myPromise = new Promise((resolve) => {
    setTimeout(() => {
        resolve("Done after 3 seconds");
    }, 3000);
});

myPromise.then(msg => console.log(msg));