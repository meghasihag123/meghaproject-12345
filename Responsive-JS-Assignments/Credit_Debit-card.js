/* 
1. Generate random numbers
 //let m=Math.random(); // Numbers b/w 0-1 (0.876564)
 //let m=Math.floor(Math.random()); // 0.876564=0 
 //let m=Math.floor(Math.random()*10); // Random integer between 0 and 9
 //let m=Math.floor(Math.random()*10)+1; // Random integer between 1 and 10
// let m = Math.floor(Math.random() * 100); // Random integer between 0 and 99
// let m = Math.floor(Math.random() * 100) + 1;  // 1-100
// let m = Math.floor(Math.random() * 90) + 10; // // between 10 and 99
// console.log(m);
*/
/* 
2. Generate random expiry date (MM/YY)
// let m=Math.floor(Math.random()*12); // an integer between 0 and 11 (inclusive).
Quick comparison
Inclusive range 0–11 → possible values: 0, 1, 2, …, 11
Exclusive range 0–11 → possible values: 1, 2, …, 10 (endpoints not included)
// let m=Math.floor(Math.random()*12)+1; // an integer between 1 and 12 (inclusive).
// console.log(m);

// For year
// let m =Math.floor(Math.random() * 5); // 0,1,2,3,4
  let m = Math.floor(Math.random() * 5) + 26; // 26,27,28,29,30
  console.log(m);
1. Math.random()
Produces a decimal between 0 (inclusive) and 1 (exclusive).
Example: 0.0, 0.35, 0.999…
2. Math.random() * 5
Multiplies that decimal by 5.
Range becomes 0 up to (but not including) 5.
Example: 0.0, 2.3, 4.999…
3. Math.floor(...)
Rounds down to the nearest integer.
Possible values: 0, 1, 2, 3, 4 (notice: 5 is excluded).
👉 That’s why we use * 5 — it gives 5 possible integers.
4. + 26
Shifts the range upward by 26.
So instead of 0–4, you now get 26–30.
✨ In short:
* 5 → gives 5 possible values (0–4).
+ 26 → shifts them into the range 26–30.
Perfect for generating expiry years between 2026 and 2030.
*/


// ***1*** CREDIT-CARD GENERATOR CODE (WITHOUT BUTTON)
// 1. Generate random 2-digit CVV
function generateCVV() {
  return (Math.floor(Math.random() * 90) + 10).toString();    // between 10–99
}
// 2. Generate random expiry date (MM/YY)
function generateExpiry() {
  // Random month between 1–12
  let m = Math.floor(Math.random() * 12) + 1;
  let month = m < 10 ? "0" + m.toString() : m.toString();

  // Random year between 26–30 (i.e., 2026–2030)
  let year = (26 + Math.floor(Math.random() * 5)).toString();

  return `${month}/${year}`;
}
// 3. Pick a random holder name from a list
function generateHolderName() {
  const names = ["Prem Kumar Shani", "Megha", "Anita", "Riya", "Arjun"];
  return names[Math.floor(Math.random() * names.length)];
}

// Example Credit Card object
function createCreditCard() {
  return {
    number: "8050 5040 2030 3020", // demo number
    holderName: generateHolderName(),
    expiry: generateExpiry(),
    cvv: generateCVV()  // stored as string
  };
}

// Render card details into HTML (HIDE CVV)
function showCard(card) {
  document.getElementById('p2').textContent = card.number;
  document.getElementById('p3').textContent = card.holderName;
  document.getElementById('expiry').textContent = card.expiry;

  console.log("Generated CVV:", card.cvv); // CVV is usually hidden

  // Mask CVV dots (Hidden on UI)
  document.getElementById("cvv").textContent = "•••";

}

// Initial load
let creditCard = createCreditCard();
showCard(creditCard);
// console.log(creditCard);

// const cvv=generateCVV();
// console.log('Generated CVV',cvv);
generateExpiry();

// ***2*** CREDIT-CARD GENERATOR CODE (WITH BUTTON) OPTIONAL
document.addEventListener('DOMContentLoaded', () => {
  const btn = document.createElement('button');
  btn.textContent = "Generate New Card";
  btn.style.marginTop = "20px";
  btn.style.background = "green";
  btn.style.padding = "15px";
  btn.style.fontSize = "20px";
  btn.style.border = "none";
  btn.style.cursor = "pointer";
  btn.style.color = "white";
  btn.style.borderRadius = "6px";
  btn.onclick = () => {
    creditCard = createCreditCard();
    showCard(creditCard);
  }

  document.body.appendChild(btn);
})