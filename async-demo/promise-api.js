const p1 = new Promise(resolve => {
  setTimeout(() => {
    console.log("First");
    resolve("abba");
  }, 2000);
});

const p2 = new Promise(resolve => {
  setTimeout(() => {
    console.log("Second");
    resolve("dabba");
  }, 2000);
});

Promise.all([p1, p2]).then(result => console.log(result));
