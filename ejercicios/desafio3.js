/*
1.Crear una función que muestre "¡Hola, mundo!" en la consola.
2.Crear una función que reciba un nombre como parámetro y muestre "¡Hola, [nombre]!" en la consola.
3.Crear una función que reciba un número como parámetro y devuelva el doble de ese número.
4.Crear una función que reciba tres números como parámetros y devuelva su promedio.
5.Crear una función que reciba dos números como parámetros y devuelva el mayor de ellos.
6.Crear una función que reciba un número como parámetro y devuelva el resultado de multiplicar ese número por sí mismo.
*/

//solucion #1
function saludar() {
    console.log("Hola Mundo")
}
//solucion #2
function saludarConNombre(name) {
    console.log(`Hola ${name}`)
}
//solucion #3
function dobleNum(num) {
    console.log(num*2)
}
//solucion #4
function promedio(num1,num2,num3) {
    let total = num1+num2+num3
    console.log(total/3)
}
//solucion #5
function mayorOMenor(num1,num2) {
    if (num1 > num2) {
        console.log(`${num1} es mayor que ${num2}`)
    }else{
        console.log(`${num2} es mayor que ${num1}`)  
    }
}
//solucion #6
function potencia(num) {
    console.log(num*num)
}


saludar()
saludarConNombre('Santiago')
dobleNum(3)
promedio(1,2,3)
mayorOMenor(3,6,8)
potencia(3)