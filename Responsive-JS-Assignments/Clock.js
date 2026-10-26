// Clock js
/* sec++;
👉 This means your clock starts from 0:0:0, not actual time.*/ 
/*let sec = 0;
let min = 0;
let hr = 0;

let secHand = document.getElementById("sec");
let minHand = document.getElementById("min");
let hrHand = document.getElementById("hr");

function updateClock() {
    sec++;

    if (sec === 60) {
        sec = 0;
        min++;
    }
    if (min === 60) {
        min = 0;
        hr++;
    }
    if (hr === 12) {
        hr = 0;
    }
    // Convert to angles
    let secDeg = sec * 6;
    let minDeg = min * 6;
    let hrDeg = hr * 30 + min * 0.5;

    secHand.style.transform = "rotate(" + secDeg + "deg)";
    minHand.style.transform = `rotate(${minDeg}deg)`;
    hrHand.style.transform = "rotate(" + hrDeg + "deg)";
}
// Run every second
setInterval(updateClock, 1000);
*/



/*
✅ Solution: Use real system time
JavaScript gives real time using:
new Date()
 */
/*
function updateClock() {
    let secHand = document.getElementById("sec")
    let minHand = document.getElementById("min")
    let hrHand = document.getElementById("hr")

    let now = new Date(); // Current Time

    let sec = now.getSeconds();
    let min = now.getMinutes();
    let hr = now.getHours();

    // Convert 24hours -> 12hours
    hr = hr % 12;

    // Convert to angles
    let secDeg = sec * 6;
    let minDeg = min * 6;
    let hrDeg = hr * 30 + min * 0.5;

    secHand.style.transform = "rotate(" + (secDeg - 90) + "deg)";
    minHand.style.transform = "rotate(" + (minDeg - 90) + "deg)";
    hrHand.style.transform = "rotate(" + (hrDeg - 90) + "deg)";
}
setInterval(updateClock, 1000);
updateClock();
*/



// CLOCK ( Real System Time )
function updateClock() {
    let secHand = document.getElementById("sec")
    let minHand = document.getElementById("min")
    let hrHand = document.getElementById("hr")

    let now = new Date(); // Current Time

    let sec = now.getSeconds();
    let min = now.getMinutes();
    let hr = now.getHours();

    // Convert 24hours -> 12hours
    hr = hr % 12;

    // Convert to angles
    let secDeg = sec * 6;
    let minDeg = min * 6;
    let hrDeg = hr * 30 + min * 0.5;

    secHand.style.transform = "rotate(" + (secDeg - 90) + "deg)";
    minHand.style.transform = "rotate(" + (minDeg - 90) + "deg)";
    hrHand.style.transform = "rotate(" + (hrDeg - 90) + "deg)";
}
setInterval(updateClock, 1000);


/*
🟢 1. Seconds Hand
let secDeg = sec * 6;
Why 6?
Full circle = 360°
Seconds = 60
👉 So:
360 ÷ 60 = 6°
Example:
If sec = 10
10 × 6 = 60°
✔️ So second hand moves to 60°
🔵 2. Minutes Hand
let minDeg = min * 6;
Same logic 👇
60 minutes = 360°
360 ÷ 60 = 6°
Example:
If min = 15
15 × 6 = 90°
✔️ Minute hand at 90°
🔴 3. Hour Hand (Most Important)
let hrDeg = hr * 30 + min * 0.5;
Step 1: Hour movement
12 hours = 360°
360 ÷ 12 = 30°
👉 So:
hr * 30
Step 2: Minute effect on hour hand
Hour hand doesn’t jump — it moves slowly 😎
In 1 hour → moves 30°
In 60 minutes → moves 30°
30 ÷ 60 = 0.5°
👉 So:
min * 0.5
🔥 Final Formula
Hour angle = (hours × 30) + (minutes × 0.5)
 */
