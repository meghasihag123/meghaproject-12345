const keyboardContainer = document.getElementById('keyboard');
const textInput = document.getElementById('textInput');

// Track Caps Lock state
let capsLockOn = true; // start with uppercase letters
// Define keys
const keys = [
    "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P",
    "A", "S", "D", "F", "G", "H", "J", "K", "L",
    "Z", "X", "C", "V", "B", "N", "M",
    "Space", "Backspace", "Enter", "CapsLock"
];

// Render keyboard
keys.forEach((key) => {
    // Make a button 
    const button = document.createElement('button');
    button.textContent = key;
    button.classList.add('key');

    // Add "special" class for special keys
    if (["Space", "Backspace", "Enter", "CapsLock"].includes(key)) {
        button.classList.add("special");
    }

    // Add a click action
    button.addEventListener('click', () => {
        if (key === "Space") {
            textInput.value += " ";
        } else if (key === "Backspace") {
            textInput.value = textInput.value.slice(0, -1); // remove last letter
        }
        else if (key === "Enter") {
            textInput.value += "\n"; // new line
        }
        else if (key === "CapsLock") {
            capsLockOn = !capsLockOn; // toggle stata
            button.classList.toggle("caps-on", capsLockOn); // highlight CapsLock button
            alert("Caps Lock is " + (capsLockOn ? "ON" : "OFF"))
        }
        else {
            // Add letter depending on Caps Lock state
            textInput.value += capsLockOn ? key.toUpperCase() : key.toLowerCase();
        }
    })

    keyboardContainer.appendChild(button);
})

/*
slice(start, end) returns a portion of a string.
start → where to begin (index number).
end → where to stop (index number, but not included).
Negative numbers count from the end of the string.
Example:
js
let word = "HELLO";
console.log(word.slice(0, -1)); // "HELL"
Example:
slice(0, -2)
Removes the last two characters.
js
let word = "HELLO";
console.log(word.slice(0, -2)); // "HEL"
0 means start at the beginning.
-1 means “up to one character before the end.”
So textInput.value.slice(0, -1) removes the last character of whatever is typed.
*/