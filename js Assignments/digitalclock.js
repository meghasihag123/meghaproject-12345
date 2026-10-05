function startTime() {
    let now = new Date();
    console.log(now);
    let Hours = now.getHours();
    //console.log(Hours);
    // document.getElementById('d1').innerHTML = Hours;
    let Minutes = now.getMinutes();
    // console.log(Minutes);
    // document.getElementById('d2').innerHTML = Minutes;
    let Seconds = now.getSeconds();
    //console.log(Seconds);
    document.getElementById('d1').innerHTML = Hours;
    document.getElementById('d2').innerHTML = Minutes;
    document.getElementById('d3').innerHTML = Seconds;

    Minutes = checkTime(Minutes);
    Seconds = checkTime(Seconds);

    setTimeout(startTime, 1000);
}
function checkTime(i) {
    if (i < 10) {
        i = "0" + i;
        // document.getElementById('d2').innerHTML = i;
        document.getElementById('d3').innerHTML = i;
    };  //  add zero in front of numbers < 10
    return i;
}