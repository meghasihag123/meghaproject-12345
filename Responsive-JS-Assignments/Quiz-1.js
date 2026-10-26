const quizData = [
  {
    question: "1. What does JS stand for?",
    options: [
      "Java Source",
      "JavaScript",
      "Just Script",
      "Jolly Script"],
    answer: 1
  },
  { question: "2. Which keyword declares a variable?", options: ["var", "let", "const", "all of these"], answer: 3 },
  { question: "3. Which symbol is used for comments?", options: ["//", "/* */", "#", "Both // and /* */"], answer: 3 },
  { question: "4. Which method selects an element by ID?", options: ["getElementById()", "querySelector()", "getElement()", "selectId()"], answer: 0 },
  { question: "5. Which operator is strict equality?", options: ["=", "==", "===", "!=="], answer: 2 },
  { question: "6. Which data type is NOT primitive?", options: ["String", "Number", "Object", "Boolean"], answer: 2 },
  { question: "7. Which function shows a popup alert?", options: ["prompt()", "alert()", "confirm()", "popup()"], answer: 1 },
  { question: "8. Which loop runs at least once?", options: ["for", "while", "do...while", "none"], answer: 2 },
  { question: "9. Which keyword stops a loop?", options: ["stop", "exit", "break", "end"], answer: 2 },
  {
    question: "10. Which HTML tag links JS?",
    options: [
      "&lt;script&gt;",
      "&lt;link&gt;",
      "&lt;js&gt;",
      "&lt;style&gt;"
    ],
    answer: 0
  }
];
/*
the browser sees "<script>" inside your innerHTML. 
Browsers treat <script> as a real HTML tag, 
not just text. That means instead of showing it as an option, 
the browser thinks you’re starting a new script block, 
so the rest of the options don’t render.

&lt; is the HTML entity for <
&gt; is the HTML entity for >
So &lt;script&gt; is just a safe way 
to display *** <script> as text on the page***.

*** When the browser sees &lt;script&gt;, 
it doesn’t try to execute it — 
it simply shows <script> in the quiz option.***
*/
const quizContainer = document.getElementById('quiz');
const resultContainer = document.getElementById('result');
const submitBtn = document.getElementById('submit');

// 1. Render Quiz
quizData.forEach((q, index) => {
  const div = document.createElement('div');
  div.className = "question";
  div.innerHTML = `<p>${q.question}</p>`;

  q.options.forEach((opt, i) => {
    div.innerHTML += `
          <div>
            <input type="radio" name="q${index}" value="${i}"> ${opt}
          </div>`;
  });
  quizContainer.appendChild(div);
})

// 2. Handle Submit (only once)
submitBtn.addEventListener('click', () => {
  let score = 0;
  quizData.forEach((q, index) => {
    const selected = document.querySelector(`input[name="q${index}"]:checked`);
    if (selected && parseInt(selected.value) === q.answer) {
      score++;
    }
  });

  resultContainer.textContent = `You scored ${score} out of ${quizData.length}`;
});

/*
🔹 What happens with =
Every time the loop runs, this replaces the entire content of div.
That means the question text (<p>${q.question}</p>) and any previous options get erased.
Only the last option remains visible.
🔹 What happens with +=
+= means append new content to whatever is already inside div.
So the question text stays, and each option gets added one after another.
Result: you see the question plus all its options stacked together.
✨ Analogy
Think of innerHTML as a notebook page:
= is like erasing the page and writing new text every time.
+= is like adding a new line below the existing text.
If you want multiple lines (options), you need +=.
   */


