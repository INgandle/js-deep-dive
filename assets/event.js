function A() {
  console.log("A");
}

function B() {
  console.log("B");
}

function C() {
  console.log("C");
}

A();
setTimeout(B, 0);
new Promise((resolve, reject) => {
  resolve();
}).then(() => {
  C();
});
console.log("D")
