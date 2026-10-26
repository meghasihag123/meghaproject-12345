// Character sets
const uppercase = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
const lowercase = 'abcdefghijklmnopqrstuvwxyz';
const numbers = '0123456789';
const symbols = "`!@#$%^&*()_-+={}[]|\\:;'<>,.?/~'";

// Get the elements from HTML
const inputField = document.querySelector("input[type='text']");
/*
               *** IMPORTANT NOTES ***
1. Finds the <input type="text"> in your HTML 
(the box where the password will appear).
document.querySelector lets you grab elements from the page.
2. ** document → represents the whole HTML page. **
3. .querySelector(...) → is a method that lets you find an element 
in the page using a CSS selector (the same way you style elements in CSS).
4. It returns the first matching element it finds.
5. ** "input[type='text']" is a CSS selector. **
It means: “Find the <input> element whose type attribute is 'text'.”
 */
const uppercaseCheckbox = document.getElementById('uppercase');
const lowercaseCheckbox = document.getElementById('lowercase');
const numbersCheckbox = document.getElementById('numbers');
const symbolsCheckbox = document.getElementById('symbols');
/*
These checkboxes let the user decide 
what type of characters should be included 
in the password.
 */
// Add a simple slider for password length
const lengthLabel = document.getElementById('len');
//   **CREATE-ELEMENT** 
const lengthSlider = document.createElement('input');
lengthSlider.type = 'range';   //  **** make it a slider ****
lengthSlider.min = 5;          // minimum password length
lengthSlider.max = 20;         // maximum password length
lengthSlider.value = 8;        // default length
lengthSlider.id = 'lengthSlider'; // give it an id
lengthLabel.after(lengthSlider); // place slider after the "password length" lable

/* Right now, the slider is created but 
doesn’t display its value.
Add a small <span> element next to it
to show the current length:
 */

// 🔹🔹 STEP 1: SHOW THE SLIDER VALUE
// CREATE-ELEMENT-AGAIN 
const lengthValue = document.createElement('span');
lengthValue.textContent = `(${lengthSlider.value})`;
lengthSlider.after(lengthValue);  // AGAIN SAME
/*
The parentheses () are just part of the string for UI decoration, and 
${lengthSlider.value} is replaced with the slider’s number.
i.e "(8)"
*/

// 🔹🔹 STEP 2: UPDATE THE VALUE WHEN SLIDER MOVES
/* Make sure the number updates live 
when you drag the slider:*/
lengthSlider.addEventListener('input', () => {
  lengthValue.textContent = `(${lengthSlider.value})`
});
/*                --EXPLANATION--
1..  lengthSlider
This is your <input type="range"> slider element.
You created it earlier 
with document.createElement('input').
2..  .addEventListener('input', ...)
addEventListener attaches an event handler to an element.
'input' is the event type → it fires whenever 
the slider is moved (its value changes).
So this means: “Whenever the slider changes, run the following function.”
3..  () => { ... }
This is an arrow function (a shorter way to write a function).
It’s the code that will run each time the slider moves.
4..  lengthValue.textContent = ...
lengthValue is the <span> you created to show the number.
.textContent sets the text inside that span.
So this updates the displayed number next to the slider.
5..  ` (${lengthSlider.value})`
This is a template literal (backticks).
${lengthSlider.value} → inserts the current slider value (e.g., 8).
The parentheses () are just characters for decoration in the UI.
Example output: " (8)".
*/

// 🔹🔹 STEP 3: CREATE THE PASSWORD GENERATOR FUNCTION
function generatePassword() {
  let chars = "";

  if (uppercaseCheckbox.checked) {
    chars += uppercase; // add uppercase letters if checked
  }
  if (lowercaseCheckbox.checked) {
    chars += lowercase;   // add lowercase letters if checked
  }
  if (numbersCheckbox.checked) {
    chars += numbers;     // add numbers if checked
  }
  if (symbolsCheckbox.checked) {
    chars += symbols;     // add symbols if checked
  }

  // If no checkbox is selected
  if (chars === "") {
    alert("Please select atleast one option!");
    return; // STOP THE FUNCTION
  }

  // GENERATE THE PASSWORD
  let password = "";
   
  for (let i = 0; i < lengthSlider.value; i++) {
    const randomIndex = Math.floor(Math.random() * chars.length);
    password += chars[randomIndex]
  }

  // SHOW PASSWORD IN INPUT-BOX
  inputField.value = password;
}
/*       EXPLANATION
Math.random() → gives a random decimal between 0 and 1 (like 0.5342).
  * chars.length → scales it up to the size of your character set.
Example: if chars has 26 letters, Math.random() * 26 gives a number between 0 and 25.
Math.floor(...) → rounds down to the nearest whole number (so you get an integer index like 0, 1, 2…).

Math.random() * chars.length
Multiply the random decimal by the length of your string.
Example: 0.5342 * 26 = 13.8892.
Now you have a random number between 0 and 26 (but not including 26).

AGAIN
Example run
chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
chars.length = 26
Math.random() = 0.5342
Math.random() * 26 = 13.8892
Math.floor(13.8892) = 13
chars[13] = "N"
👉 So the random character chosen is "N".

chars[randomIndex] → picks one random character from the chars string.
+= → adds that character to the growing password.
After the loop finishes, password is a full random string.

inputField is your <input type="text"> box in the HTML.
.value sets what text appears inside that box.
*/

// 🔹🔹 Step 4: Add a button to trigger password generation
const generateBtn = document.createElement('button');
generateBtn.textContent = "Generate Password";
generateBtn.style.margin = "2px";
lengthLabel.parentNode.appendChild(generateBtn);
// OR
// document.querySelector(".container").appendChild(generateBtn)

generateBtn.addEventListener('click', generatePassword);
/*  EXPLANATION
lengthLabel is your <p id="len">Password Length</p> element.
.parentNode means “the parent element that contains lengthLabel.”
→ In your HTML, that parent is <div class="container">.
.appendChild(generateBtn) means “add the new button inside that parent, at the end.”
So the button appears below your password length label inside the container.
*/


