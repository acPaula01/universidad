/*
1-Crea un programa que utilice console.log para mostrar un mensaje de bienvenida.

2-Crea una variable llamada "nombre" y asígnale tu nombre. Luego, utiliza console.log para mostrar el mensaje "¡Hola, [tu nombre]!" en la consola del navegador.

3-Crea una variable llamada "nombre" y asígnale tu nombre. Luego, utiliza alert para mostrar el mensaje "¡Hola, [tu nombre]!".

4-Utiliza prompt y haz la siguiente pregunta: ¿Cuál es el lenguaje de programación que más te gusta?. Luego, almacena la respuesta en una variable y muestra la respuesta en la consola del navegador.

5-Crea una variable llamada "valor1" y otra llamada "valor2", asignándoles valores numéricos de tu elección. Luego, realiza la suma de estos dos valores y almacena el resultado en una tercera variable llamada "resultado". Utiliza console.log para mostrar el mensaje "La suma de [valor1] y [valor2] es igual a [resultado]." en la consola.

6-Crea una variable llamada "valor1" y otra llamada "valor2", asignándoles valores numéricos de tu elección. Luego, realiza la resta de estos dos valores y almacena el resultado en una tercera variable llamada "resultado". Utiliza console.log para mostrar el mensaje "La diferencia entre [valor1] y [valor2] es igual a [resultado]." en la consola.

7-Pide al usuario que ingrese su edad con prompt. Con base en la edad ingresada, utiliza un if para verificar si la persona es mayor o menor de edad y muestra un mensaje apropiado en la consola.

8-Crea una variable "numero" y solicita un valor con prompt. Luego, verifica si es positivo, negativo o cero utilizando un if-else y muestra el mensaje correspondiente.

9-Utiliza un bucle while para mostrar los números del 1 al 10 en la consola.

10-Crea una variable "nota" y asígnale un valor numérico. Utiliza un if-else para determinar si la nota es mayor o igual a 7 y muestra "Aprobado" o "Reprobado" en la consola.

11-Utiliza Math.random para generar cualquier número aleatorio y muestra ese número en la consola.

12-Utiliza Math.random para generar un número entero entre 1 y 10 y muestra ese número en la consola.

13-Utiliza Math.random para generar un número entero entre 1 y 1000 y muestra ese número en la consola.
*/

//solucion #1
let saludar = "Hola, bienvenidos";
console.log(saludar);

//solucion #2
let nombre = "";
nombre = prompt("Escriba su nombre: ");
console.log(nombre)

//solucion #3
let nombre2 = "";
nombre2 = prompt("Escriba su nombre: ");
alert(`Hola ${nombre2}`);

//solucion #4
let lenguajeFavorito = prompt("¿Cual es tu lenguaje de programacio favorito?: ");
console.log(lenguajeFavorito);

//solucion #5
let valor1, valor2, resultado;
valor1 = 1;
valor2 = 2
resultado = valor1 + valor2;
console.log(`La suma de los valores ${valor1} + ${valor2} = ${resultado}`);

//solucion #6
let valor1_1, valor1_2, resultado2;
valor1_1 = 2;
valor1_2 = 1;
resultado2 = valor1_1 - valor1_2;
console.log(`La suma de los valores ${valor1_1} - ${valor1_2} = ${resultado2}`);

//solucion #7
let edad = parseInt(prompt("Ingrese su edad aqui: "));
if (edad > 18) {
    console.log("Eres mayor de edad");
}else{
    console.log("Eres menor de edad");
}

//solucion #8
let numero = parseInt(prompt("Ingrese un numero: "));
if (numero > 0) {
    console.log("es positivo");
}else if (numero == 0) {
    console.log("El numero es 0");
} else {
    console.log("Numero negativo");
}

//solucion #9
let numero2 = 1;
while(numero2 <= 10){
    console.log(numero2);
    numero2++;
}

//solucion #10
let nota = parseInt(prompt("Ingrese una nota: "));
if (nota > 7) {
    console.log("Aprovado")
} else {
    console.log("Desaprovado")
}

//solucion #11
console.log(Math.random())

//solucion #12
console.log(Math.floor(Math.random()*10)+1)

//solucion #13
console.log(Math.floor(Math.random()*1000)+1)