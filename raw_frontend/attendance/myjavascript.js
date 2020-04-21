var x = document.getElementById("studentlogin");
var y = document.getElementById("teacherlogin");
var z = document.getElementById("parentlogin");

function loginparent(){
  x.style.left = "-450px";
  y.style.left = "550px";
  z.style.left = "90px";
}
function loginstudent(){
  x.style.left = "90px";
  y.style.left = "-450px";
  z.style.left = "550px";
}
function loginteacher(){
  x.style.left = "-450px";
  y.style.left = "90px";
  z.style.left = "550px";
}
