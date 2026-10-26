const bg1 = document.querySelector('.bg1');
const bg2 = document.querySelector('.bg2');
const bg3 = document.querySelector('.bg3');
const bg4 = document.querySelector('.bg4');
let heading = document.getElementById('heading');

bg4.addEventListener('click', () => {
    document.body.style.background = "white";
    heading.classList.add("black-heading");   // apply black text

    heading.classList.remove('whitesmoke-heading');
     heading.classList.remove('yellow-heading');
});

// For other backgrounds, remove the black-heading class
bg1.addEventListener('click', () => {
    document.body.style.background = 'black';
    heading.classList.remove("black-heading");

    heading.classList.remove('whitesmoke-heading');
     heading.classList.remove('yellow-heading');
});

bg2.addEventListener('click', () => {
    document.body.style.background = 'linear-gradient(90deg, #38bdf8, #f44336, black)';
    heading.classList.remove("black-heading");

    heading.classList.remove('whitesmoke-heading');
    heading.classList.add('yellow-heading');
});

bg3.addEventListener('click', () => {
    document.body.style.background = "linear-gradient(90deg, #ff6ec4, #7873f5)";
    heading.classList.remove("black-heading");

    heading.classList.add('whitesmoke-heading');

    heading.classList.remove('yellow-heading');
});

