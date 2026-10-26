let b1 = document.getElementById("b1")
let b2 = document.getElementById("b2")
let b3 = document.getElementById("b3")
let b4 = document.getElementById("b4")
let b5 = document.getElementById("b5")
let b6 = document.getElementById("b6")
let b7 = document.getElementById("b7")
let b8 = document.getElementById("b8")
let b9 = document.getElementById("b9")
let c1 = document.getElementsByClassName("c1")
let flag = 1
function bu1() {

    if (flag == 1) {
        b1.value = "X"
        b1.disabled = true
        flag = 0
    }
    else {
        b1.value = "O"
        b1.disabled = true
        flag = 1
    }
}
function bu2() {

    if (flag == 1) {
        b2.value = "X"
        b2.disabled = true
        flag = 0
    }
    else {
        b2.value = "O"
        b2.disabled = true
        flag = 1
    }
}
function bu3() {

    if (flag == 1) {
        b3.value = "X"
        b3.disabled = true
        flag = 0
    }
    else {
        b3.value = "O"
        b3.disabled = true
        flag = 1
    }
}
function bu4() {

    if (flag == 1) {
        b4.value = "X"
        b4.disabled = true
        flag = 0
    }
    else {
        b4.value = "O"
        b4.disabled = true
        flag = 1
    }
}
function bu5() {

    if (flag == 1) {
        b5.value = "X"
        b5.disabled = true
        flag = 0
    }
    else {
        b5.value = "O"
        b5.disabled = true
        flag = 1
    }
}
function bu6() {
    if (flag == 1) {
        b6.value = "X"
        b6.disabled = true
        flag = 0
    }
    else {
        b6.value = "O"
        b6.disabled = true
        flag = 1
    }
}
function bu7() {
    if (flag == 1) {
        b7.value = "X"
        b7.disabled = true
        flag = 0
    }
    else {
        b7.value = "O"
        b7.disabled = true
        flag = 1
    }
}
function bu8() {
    if (flag == 1) {
        b8.value = "X"
        b8.disabled = true
        flag = 0
    }
    else {
        b8.value = "O"
        b8.disabled = true
        flag = 1
    }
}
function bu9() {
    if (flag == 1) {
        b9.value = "X"
        b9.disabled = true
        flag = 0
    }
    else {
        b9.value = "O"
        b9.disabled = true
        flag = 1
    }
}


function result() {
    // Winning Conditions
    if (b1.value !== "" && b1.value === b2.value && b2.value === b3.value) {
        showWinner(b1.value)
    } else if (b4.value !== "" && b4.value === b5.value && b5.value === b6.value) {
        showWinner(b4.value)
    } else if (b7.value !== "" && b7.value === b8.value && b8.value === b9.value) {
        showWinner(b7.value)
    } else if (b1.value !== "" && b1.value === b4.value && b4.value === b7.value) {
        showWinner(b1.value)
    } else if (b2.value !== "" && b2.value === b5.value && b5.value === b8.value) {
        showWinner(b2.value)
    } else if (b3.value !== "" && b3.value === b6.value && b6.value === b9.value) {
        showWinner(b3.value)
    } else if (b1.value !== "" && b1.value === b5.value && b5.value === b9.value) {
        showWinner(b1.value)
    } else if (b3.value !== "" && b3.value === b5.value && b5.value === b7.value) {
        showWinner(b3.value)
    } else if (
        b1.value !== "" && b2.value !== "" && b3.value !== "" &&
        b4.value !== "" && b5.value !== "" && b6.value !== "" &&
        b7.value !== "" && b8.value !== "" && b9.value !== ""
    ) {
        document.getElementById("winner").innerText = "It's a Draw!"
    }
}

function showWinner(player) {
    document.getElementById("winner").innerText = "Winner: " + player
    b1.disabled = true
    b2.disabled = true
    b3.disabled = true
    b4.disabled = true
    b5.disabled = true
    b6.disabled = true
    b7.disabled = true
    b8.disabled = true
    b9.disabled = true
}

function reset() {
    b1.value = ""
    b2.value = ""
    b3.value = ""
    b4.value = ""
    b5.value = ""
    b6.value = ""
    b7.value = ""
    b8.value = ""
    b9.value = ""

    b1.disabled = false
    b2.disabled = false
    b3.disabled = false
    b4.disabled = false
    b5.disabled = false
    b6.disabled = false
    b7.disabled = false
    b8.disabled = false
    b9.disabled = false

    document.getElementById("winner").innerText = ""
    flag = 1
}

