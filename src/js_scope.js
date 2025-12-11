let x = 1;

function showX() {
    console.log("showX, x =", x);
}

function scopeTest() {
    let x = 2; // shadow
    console.log("inside function, x =", x);

    {
        let x = 3;
        console.log("inside block, x =", x);
    }

    console.log("back in function, x =", x);
}

function staticScopingExample() {
    let x = 10;
    showX(); 
}

console.log("JS Example:");
showX();
scopeTest();
staticScopingExample();