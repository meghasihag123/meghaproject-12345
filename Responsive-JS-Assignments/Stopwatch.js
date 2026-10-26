// let seconds = 0;
// let minutes = 0;
// let hours = 0;
// let count = 0;
// let timerID; // global
// function start() {


//     timerID = setInterval(function () {
//         seconds++;
//         if (seconds >= 60) {
//             seconds = 0; // reset seconds
//             minutes++;
//         }
//         if (minutes >= 60) {
//             minutes = 0; // reset minutes
//             hours++;
//         }
//         if (hours >= 24) {
//             hours = 0; // reset after 24 hours
//         }
//         document.getElementById('sec').textContent = seconds < 10 ? "0" + seconds : seconds;
//         document.getElementById('min').textContent = minutes < 10 ? "0" + minutes : minutes;
//         document.getElementById('hr').textContent = hours < 10 ? "0" + hours : hours;


//     }, 1000);

//     document.getElementById('b1').disabled = true; // prevent multiple timers
// }

// function stop() {
//     clearInterval(timerID);
//     document.getElementById('b1').disabled = false; // allow restart

// }
// // Attach event listeners once
// document.getElementById('b1').addEventListener('click', start);
// document.getElementById('b2').addEventListener('click', stop);

let seconds = 0;
let minutes = 0;
let hours = 0;
let count = 0;
let timer = false

function start() {
    timer = true;
    stopwatch();
}
function stop() {
    timer = false;
}
function reset() {
    timer = false;
    hours = 0;
    seconds = 0;
    minutes = 0;
    count = 0;
    document.getElementById('hr').innerHTML = "00";
    document.getElementById('min').innerHTML = "00";
    document.getElementById('sec').innerHTML = "00";
    document.getElementById('count').innerHTML = "00";
}
function stopwatch() {
    if (timer == true) {
        count = count + 1;
        if (count == 100) {
            seconds = seconds + 1;
            count = 0;
        }
        if (seconds == 60) {
            minutes++;
            seconds = 0;
        }
        if (minutes == 60) {
            hours++;
            minutes = 0;
            seconds = 0;
        }

        let hrString = hours;
        let minString = minutes;
        let secString = seconds;
        let countString = count;

        if (hours < 10) {
            hrString = "0" + hrString;
        }
        if (minutes < 10) {
            minString = "0" + minString;
        }
        if (seconds < 10) {
            secString = "0" + secString;
        }
        if (count < 10) {
            countString = "0" + countString;
        }

        // document.getElementById('hr').innerHTML = hours;
        // document.getElementById('min').innerHTML = minutes;
        // document.getElementById('sec').innerHTML = seconds;
        // document.getElementById('count').innerHTML = count;

        document.getElementById('hr').innerHTML = hrString;
        document.getElementById('min').innerHTML = minString;
        document.getElementById('sec').innerHTML = secString;
        document.getElementById('count').innerHTML = countString;

        setTimeout("stopwatch()", 10); // Wait 10 milliseconds

    }

}