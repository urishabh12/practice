const p = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve(1);
    reject(new Error("message"));
  }, 2000);
});

function myFunc(result) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve("Run");
    }, 2000);
  });
}

function last(run) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve("Last");
    }, 2000);
  });
}

p.then(result => myFunc(result))
  .then(run => last(run))
  .then(fun => console.log(fun))
  .catch(err => console.log("Error", err.message));

//async and await
async function display() {
  const a = await myFunc(1);
  const b = await last(a);
  console.log(b);
}
