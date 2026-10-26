// TIC_TAC_TOE
let b1 = document.getElementById("b1");
let b2 = document.getElementById("b2");
let b3 = document.getElementById("b3");
let b4 = document.getElementById("b4");
let b5 = document.getElementById("b5");
let b6 = document.getElementById("b6");
let b7 = document.getElementById("b7");
let b8 = document.getElementById("b8");
let b9 = document.getElementById("b9");

let flag = 1;

function bu1() {
    if (flag == 1) {
        b1.value = "X";
        flag = 0;
    } else {
        b1.value = "O";
        flag = 1;
    }
    b1.disabled = true;
}

function bu2() {
    if (flag == 1) {
        b2.value = "X";
        flag = 0;
    } else {
        b2.value = "O";
        flag = 1;
    }
    b2.disabled = true;
}

function bu3() {
    if (flag == 1) {
        b3.value = "X";
        flag = 0;
    } else {
        b3.value = "O";
        flag = 1;
    }
    b3.disabled = true;
}

function bu4() {
    if (flag == 1) {
        b4.value = "X";
        flag = 0;
    } else {
        b4.value = "O";
        flag = 1;
    }
    b4.disabled = true;
}

function bu5() {
    if (flag == 1) {
        b5.value = "X";
        flag = 0;
    } else {
        b5.value = "O";
        flag = 1;
    }
    b5.disabled = true;
}

function bu6() {
    if (flag == 1) {
        b6.value = "X";
        flag = 0;
    } else {
        b6.value = "O";
        flag = 1;
    }
    b6.disabled = true;
}

function bu7() {
    if (flag == 1) {
        b7.value = "X";
        flag = 0;
    } else {
        b7.value = "O";
        flag = 1;
    }
    b7.disabled = true;
}

function bu8() {
    if (flag == 1) {
        b8.value = "X";
        flag = 0;
    } else {
        b8.value = "O";
        flag = 1;
    }
    b8.disabled = true;
}

function bu9() {
    if (flag == 1) {
        b9.value = "X";
        flag = 0;
    } else {
        b9.value = "O";
        flag = 1;
    }
    b9.disabled = true;
}


function result() {
    let r = document.getElementById('r');
    // All Win combinations
    if ((b1.value === 'X' && b2.value === 'X' && b3.value === 'X') ||
        (b4.value === 'X' && b5.value === 'X' && b6.value === 'X') ||
        (b7.value === 'X' && b8.value === 'X' && b9.value === 'X') ||

        (b1.value === 'X' && b4.value === 'X' && b7.value === 'X') ||
        (b2.value === 'X' && b5.value === 'X' && b8.value === 'X') ||
        (b3.value === 'X' && b6.value === 'X' && b9.value === 'X') ||

        (b1.value === 'X' && b5.value === 'X' && b9.value === 'X') ||
        (b3.value === 'X' && b5.value === 'X' && b7.value === 'X')
    ) {
        r.innerHTML = "X wins";
        r.style.color = "green";
    }
    else if ((b1.value === 'O' && b2.value === 'O' && b3.value === 'O') ||
        (b4.value === 'O' && b5.value === 'O' && b6.value === 'O') ||
        (b7.value === 'O' && b8.value === 'O' && b9.value === 'O') ||

        (b1.value === 'O' && b4.value === 'O' && b7.value === 'O') ||
        (b2.value === 'O' && b5.value === 'O' && b8.value === 'O') ||
        (b3.value === 'O' && b6.value === 'O' && b9.value === 'O') ||

        (b1.value === 'O' && b5.value === 'O' && b9.value === 'O') ||
        (b3.value === 'O' && b5.value === 'O' && b7.value === 'O')
    ) {
        r.innerHTML = "O wins";
        r.style.color = "blue";
    }
    // Draw condition
    else if (
        b1.value !== "" && b2.value !== "" && b3.value !== "" &&
        b4.value !== "" && b5.value !== "" && b6.value !== "" &&
        b7.value !== "" && b8.value !== "" && b9.value !== ""
    ) {
        r.innerHTML = "Draw !!";
        r.style.color = "red";
    }

}