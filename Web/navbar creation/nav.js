let btno=document.getElementById("open");
let btnc=document.getElementById("close");
let container=document.querySelector(".contain");
btnc.onclick=function(){
  container.classList.add("hide");
  btnc.classList.add("hide");
  btno.classList.remove("hide");
}
btno.onclick=function(){
    this.classList.add("hide");
    container.classList.remove("hide");
    btnc.classList.remove("hide");
}