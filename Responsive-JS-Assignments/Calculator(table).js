function one(b){
    let a=document.getElementById("output")
    a.value+=b
}
function result(){
    let c=document.getElementById("output").value
    document.getElementById("output").value=eval(c)

}
function clr(){
    document.getElementById("output").value=""
}