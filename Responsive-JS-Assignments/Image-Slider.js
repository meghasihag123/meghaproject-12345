// LOGIC-1
/* Image Logic
images=4(0,1,2,3)
0=Ist Image....
*/
/* Arrow Logic
// left arrow
   flag = 2 + (-1)=1 ==2nd image
   // right arrow
   flag = 2 + (+1)=3 = 4th image
   */
// LOGIC-2
/*
images=4(0,1,2,3) -1 0r 4 is not present in this ARRAY, IS NOt HERE
SOLUTION FOR LOGIC-1
if num(value)>3 reset to =0
and if num(value)<0 reset to =3 
This is Limited to 4-Images/Slides 

final:Do it like ARRAY.LENGTH
*/


let flag = 0;

function controller(x) {
    flag = flag + x;
    slideshow(flag); // IMPORTANT

}
slideshow(flag);

function slideshow(num) {
    let slides = document.getElementsByClassName('slide');

    if (num == slides.length) {
        flag = 0;
        num = 0;
    }
    if (num < 0) {
        flag = slides.length-1;
         num = slides.length-1;
    }
    // Hide-images (Slides)
    for (let y of slides) {
        y.style.display = "none";
    }
    // Show-Desired-Image (Visible)
    slides[num].style.display = "block";


}
