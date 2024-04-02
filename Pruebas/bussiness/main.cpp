#include<iostream>
using namespace std;
/*
 *Operaciones básicas
 *Escriba un programa tal que dado como datos dos números, calcule la suma, resta,
 *multiplicación y división de dichos números en el orden dado. 
*/
int main()
{
    float num1,num2,resultado;
    cout << "Digite los dos numeros a operar: " << endl;
    cin>>num1;
    cin>>num2;

    resultado = num1+num2;
    cout<< "La suma de a y b es: "<<resultado<<endl; // a,b y resultado son variables
    

    resultado = num1-num2;
    cout<< "La resta de a y b es: "<<resultado<<endl; // a,b y resultado son variables
    

    resultado = num1*num2;
    cout<< "La multiplicacion de a y b es: "<<resultado<<endl; // a,b y resultado son variables
    

    if(num2 != 0){
        resultado = num1/num2;
        cout<< "La division de a y b es: "<<resultado<<endl; // a,b y resultado son variables
        
    }
    else{
        cout<< "No se puede dividir entre cero";
    }
    
    return 0;
}