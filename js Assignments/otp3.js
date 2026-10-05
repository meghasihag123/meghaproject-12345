/*let a = document.getElementById("box1");
//console.log(a);

 function otp() {
     let x = Math.floor(Math.random() * 100000) + 1;
     // console.log(x);
     a = x;
     document.getElementById("box1").innerHTML = a;
 }*/

//  otp generator
// Note : On refreshing again and again we get random numbers (on Console)
/*let j = '';
let i;
let a;
//function otp() {
for (i = 1; i <= 4; i++) {
    // console.log(i);
    //j += i;
    // console.log(j);
    a = Math.floor(Math.random() * 10);
    j += a;
    // t1.value = j;

    // console.log(a);
}
// console.log(i);
console.log(j);
//console.log(a);
//}*/

//  AGAIN (otp will appears in text box also on refreshing)
/*let t1 = document.getElementById('box1');
let j = '';
let i;
let a;
//function otp() {
for (i = 1; i <= 4; i++) {
    // console.log(i);
    //j += i;
    // console.log(j);
    a = Math.floor(Math.random() * 10);
    j += a;
    t1.value = j;

    // console.log(a);
}
// console.log(i);
console.log(j);
//console.log(a);
//}*/

// FINALLY (on click otp button)
function otp() {
    let t1 = document.getElementById('box1');
    let j = '';
    let i;
    let a;
    for (i = 1; i <= 4; i++) {
        // console.log(i);
        //j += i;
        // console.log(j);
        a = Math.floor(Math.random() * 10);
        j += a;
        // t1.value = j;

        // console.log(a);
    }
    // console.log(i);
    t1.value = j;
    console.log(j);
    //console.log(a);

}
// copy() OTP
// How TO - Copy Text to Clipboard
function copy() {
    // Get the text field
    let t1 = document.getElementById('box1');
    // Select the text field
    t1.select();
    t1.setSelectionRange(0, 99999);
    navigator.clipboard.writeText(t1.value);
    // alert the copied text
    alert("OTP has copied: " + t1.value);
}
// Resend OTP
function resend() {
    let t1 = document.getElementById('box1');
    let j = '';
    for (let i = 1; i <= 4; i++) {
        let a = Math.floor(Math.random() * 10);
        j += a;
    }
    t1.value = j;
    // console.log("Resent OTP: " + j);
    alert('Resend OTP:' + j);
}









