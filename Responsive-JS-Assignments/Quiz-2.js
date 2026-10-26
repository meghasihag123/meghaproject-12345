// 1. Quiz data
const quizData = [
    {
        question: "1. What does JS stand for? ",
        options: [
            "Java Source",
            "JavaScript",
            "Just Script",
            "Jolly Script"
        ],
        answer: 1
    },
    { question: "2. Which keyword declares a variable?", options: ["var", "let", "const", "all of these"], answer: 3 },
    { question: "3. Which symbol is used for comments?", options: ["//", "/* */", "#", "Both // and /* */"], answer: 3 },
    { question: "4. Which method selects an element by ID?", options: ["getElementById()", "querySelector()", "getElement()", "selectId()"], answer: 0 },
    {
        question: "5. Which HTML tag links JS?",
        options: [
            "<script>",
            "<link>",
            "<js>",
            "<style>",
        ],
        answer: 0
    },
];

// 2. Setting up the quiz container and button
const quizContainer = document.getElementById('quiz');
const nextBtn = document.getElementById('next');
let currentQuestion = 0; // Tracker
let score = 0; // Track correct answers

// 3. Showing one question at a time
function showQuestion(index) {
    quizContainer.innerHTML = ""; // CLEAR OLD QUESTION
    let q = quizData[index];    // get the current question object

    const div = document.createElement('div');
    div.className = "question";
    // OR
    // div.classList.add('question');
    div.textContent = q.question;

    const ulList = document.createElement('ul');

    q.options.forEach((opt, i) => {
        const li = document.createElement('li');
        li.textContent = opt;

        //  Answer logic: check when clicked
        li.addEventListener('click', () => {
            // Clear all previous highlights
            [...ulList.children].forEach(child => {
                child.style.background = "";
                child.style.pointerEvents = "auto"; // re-enable clicks
            });

            // Mark Selected
            if (i === q.answer) {
                li.style.background = "lightgreen"; // Correct
                // li.classList.add("correct"); // applies green background
                score++; // Add point if correct
            } else {
                //  li.classList.add("wrong");   // applies red background
                li.style.background = "tomato"; // Wrong
            }

            // Lock Selection
            [...ulList.children].forEach(child => {
                child.style.pointerEvents = "none"; // disable further clicks
            });
        });
        ulList.appendChild(li);
    });

    div.appendChild(ulList);
    quizContainer.appendChild(div);
}

// 4. Button logic
nextBtn.addEventListener('click', () => {
    currentQuestion++;
    if (currentQuestion < quizData.length) {
        showQuestion(currentQuestion);
    } else {
        quizContainer.innerHTML = `
        <div class="result">
        <p>Quiz finished. You got ${score} out of ${quizData.length}</p>
        <img src="fireworks.gif" 
         alt="Celebration" class="celebration">
        </div>`;
        nextBtn.style.display = "none"; // IMPORTANT
    }
});

// 5. START QUIZ
showQuestion(currentQuestion);

/*1. What is ulList.children?
When you create a <ul> and add <li> items, 
the browser keeps them in a live collection called HTMLCollection.
Example:
html
<ul>
 <li>Java Source</li>
 <li>JavaScript</li>
 <li>Just Script</li>
 <li>Jolly Script</li>
</ul>
If you run:
js
console.log(ulList.children);
You’ll see something like:
Code
HTMLCollection(4) [li, li, li, li]
It’s like an array, but not exactly — it doesn’t have .forEach, .map, etc.
 
2. Why [...ulList.children]?
[...] is the spread operator.
It takes the HTMLCollection and spreads 
its items into a real array.
js
const arr = [...ulList.children];
console.log(arr);
Now you’ll see:
Code
[li, li, li, li]
This is a true array, so you can use .forEach, .map, .filter, etc.

*/

