// 1.. WITH DELETE BUTTON
// function Add() {
//     const search_box = document.getElementById('search-box');
//     let sb = search_box.value.trim();
//     if (sb === "") {
//         return;
//     }
//     // console.log(sb);

//     let taskDiv = document.createElement('div');

//     // Task text
//     let span1 = document.createElement('span');
//     span1.textContent = sb;

//     // Delete button
//     let btn = document.createElement('button');
//     btn.textContent = "del";
//     // Task+Button
//     taskDiv.appendChild(span1);
//     taskDiv.appendChild(btn);

//     // Delete Functionality
//     btn.addEventListener('click', function () {
//         taskDiv.parentNode.removeChild(taskDiv);
//         /*
//         OR
//         taskDiv.innertHTML="";
//          */
//     })

//     document.getElementById('taskList').appendChild(taskDiv);

//     // Clear input
//     search_box.value = "";

// }

// 2.. WITH DELETE IMAGE
// function Add() {
//     const search_box = document.getElementById('search-box');
//     let sb = search_box.value.trim();
//     if (sb === "") {
//         return;
//     }
//     // console.log(sb);

//     let taskDiv = document.createElement('div');

//     // Task text
//     let span1 = document.createElement('span');
//     span1.textContent = sb;

//     // Delete IMAGE
//     let delImg = document.createElement('img');
//     delImg.src = "delete.jpg";
//     delImg.alt = "Delete";
//     delImg.style.width = "30px";
//     delImg.style.cursor = "pointer"
//     // Task+Button
//     taskDiv.appendChild(span1);
//     taskDiv.appendChild(delImg);

//     // Delete Functionality
//     delImg.addEventListener('click', function () {
//         taskDiv.parentNode.removeChild(taskDiv);
//         /*
//         OR
//         taskDiv.innertHTML="";
//          */
//     })

//     document.getElementById('taskList').appendChild(taskDiv);

//     // Clear input
//     search_box.value = "";

// }

// 3. WITH DELETE IMAGE + CHECKBOX
function Add() {
    const search_box = document.getElementById('search-box');
    let sb = search_box.value.trim();
    if (sb === "") {
        return;
    }

    let taskDiv = document.createElement('div');

    // Task text
    let span1 = document.createElement('span');
    span1.textContent = sb;

    // Delete IMAGE
    let delImg = document.createElement('img');
    delImg.src = "delete.jpg";
    delImg.alt = "Delete";
    delImg.style.width = "30px";
    delImg.style.cursor = "pointer"

    // Checkbox
    let checkbox = document.createElement('input');
    checkbox.type = "checkbox";
    checkbox.style.marginRight = "10px";

    // When checked, STRIKE THROUGH TEXT
    checkbox.addEventListener('change', () => {
        if (checkbox.checked) {
            span1.style.textDecoration = "line-through";
            span1.style.textDecorationThickness = "3px";
            span1.style.color = "gray";
        }
        else {
            span1.style.textDecoration = "none";
            span1.style.color = "black";
        }
    });

    // Text+Image+checkbox
    taskDiv.appendChild(checkbox);
    taskDiv.appendChild(span1);
    taskDiv.appendChild(delImg);

    // Delete Functionality
    delImg.addEventListener('click', function () {
        taskDiv.parentNode.removeChild(taskDiv);
        /*
        OR
        taskDiv.innertHTML="";
         */
    })

    document.getElementById('taskList').appendChild(taskDiv);

    // Clear input
    search_box.value = "";

}

