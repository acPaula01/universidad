let titulo = document.querySelector("h1");
titulo.innerHTML = "Hora de desafio"

function mostrarConsola(){
    console.log("El boton fue cliclado")
}

function promptCiudad() {
    let ciudad = prompt("Ingrese una ciudad de brazil")
    alert(`Estuve en ${ciudad} y me acorde de ti`)
}

function alertMessage() {
    alert("Yo amo js")
}

function sumaNums() {
    let valor1, valor2, resultado;
    valor1 = parseInt(prompt("Ingrese un numero: "))
    valor2 = parseInt(prompt("Ingrese un numero: "))
    resultado = valor1 +valor2
    alert(resultado)
}