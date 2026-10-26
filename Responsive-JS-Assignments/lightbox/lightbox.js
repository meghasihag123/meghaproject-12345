// function to include html popup code
function includePopupHTML() {
    let html = `<div id="vis-popup"><span id="close" onclick="closePopup()"><img id="npop" 
    src = "./image/close.png" alt = "" > </span > <img id="leftarrow"
        src="./image/download-removebg-preview.png" alt=""><img id="rightarrow"
            src="./image/right-removebg-preview - Copy (2).png" alt="">
            <img id="mainPopImage" src="../image/mac.jpg" alt="">
            </div> `;

    // CreateElement
    let popdiv = document.createElement("div");
    popdiv.innerHTML = html;

    document.body.insertBefore(popdiv, document.body.firstChild)
}
// includePopupHTML();

let img; // globally
let current; // current image

// function to init plugin
function imagePopupInit(target) {

    // 1. Select all images with class target
    img = document.getElementsByClassName(target);

    // console.log(img);
    // 2. Add event listener to all selected images
    for (var i = 0; i < img.length; i++) {
        // Add pointer
        img[i].style.cursor = 'pointer';
        // Add event listener
        img[i].addEventListener("click", function () {
            document.getElementById("mainPopImage").src = this.src;
            document.getElementById("vis-popup").style.display = "block";
            checkArrow();
        })
    }

    includePopupHTML();
    // next button
    document.getElementById("rightarrow").addEventListener('click', function () {
        nextimg();
    })
    // prev button
    document.getElementById("leftarrow").addEventListener('click', function () {
        previmg();
    })
}

// Close button
function closePopup() {
    document.getElementById("mainPopImage").src = "";
    document.getElementById("vis-popup").style.display = "none"
}

// next image
function nextimg() {
    // alert('next');
    getCurrentImage();
    current++;
    document.getElementById("mainPopImage").src = img[current].src;
    checkArrow();
}
// prev image
function previmg() {
    // alert('prev');
    getCurrentImage();
    current--;
    document.getElementById("mainPopImage").src = img[current].src;
    checkArrow();
}

// Current image
function getCurrentImage() {
    for (let i = 0; i < img.length; i++) {
        if (img[i].src == document.getElementById("mainPopImage").src) {
            current = i;
        }
    }
}

// check arrow
function checkArrow() {
    getCurrentImage();
    if (current == '0') {
        document.getElementById('leftarrow').style.display = 'none';
        document.getElementById('rightarrow').style.display = 'block';
    } else if (current == img.length - 1) {
        document.getElementById('rightarrow').style.display = 'none';
        document.getElementById('leftarrow').style.display = 'block';
    } else {
        document.getElementById('leftarrow').style.display = 'block';
        document.getElementById('rightarrow').style.display = 'block';
    }
}