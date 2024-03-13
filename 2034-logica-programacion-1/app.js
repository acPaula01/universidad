/* 
Para buenas practicsa se utiliza el punto y coma
despues de hacer un salto de linea
*/
////// iniciacion
//hola mundo en javascript.
alert('Hola mundo');
// imprimir varible en consola
//console.log(numeroAdivinar);


//////variables
//numero secreto de adivinanza
let numeroMax = 1000;
let numeroSecreto = Math.floor(Math.random()*numeroMax)+1;
let numeroAdivinar = 0;
let intentos = 1;
//let palabraVez = "vez";
let maximoIntentos = 3;

//bucle
while(numeroAdivinar != numeroSecreto){
    
    //entrada de usuario
    numeroAdivinar = parseInt(prompt(`Indicame un numero entre 1 y ${numeroMax}: `));
    
    
    //////clases if o comparacion
    // comparar num user con num secreto
    if (numeroAdivinar == numeroSecreto){
        alert(`Acertaste, el numero es: ${numeroAdivinar}. lo hiciste en: ${intentos} ${intentos == 1 ? 'vez': 'veces'}`); // forma de concatenenar variables con texto, es como format en python o como f"algo: {algo}"
        //para hacer las comillas invertidas utilizamos alt + 96 teclado numerico
        // ${intentos == 1 ? 'vez': 'veces'} aqui evalua codigo javascript, donde (?) es un if y donde (:) es un else
        // ${}-> esto se llama template strings
        //esta forma de refactorizar el code se le conoce como operador ternario
    }else{
        //alert('Lo siento no acertaste el numero');
        if (numeroAdivinar > numeroSecreto){
            alert("El numero secreto es menor");
        }else{
            alert("Numero secreto es mayor ");
        }
        // forma de sumar una cantidad o hacer contadores
        intentos++;
        if(intentos > maximoIntentos){
            alert(`Llegaste al numero maximo de intentos ${maximoIntentos}`)
            break;
        }
    }
}