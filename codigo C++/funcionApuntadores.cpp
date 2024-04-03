#include<iostream>
using namespace std;
int main(){
	int numero = 10,*dir_numero; //crea el púntero y la variable donde se guarda la posicion en memoria
	dir_numero =&numero; //guarda la direccion de memoria de numero 
	cout<<"Programa patra apuntadores"<<"\n\n\n";
	
	cout<<"Numero: "<<numero<<endl;
	cout<<"Direccion de memoria: "<<&numero<<endl;
	
	cout<<"\apuntador"<<endl;
	cout<<"Numero: "<<*dir_numero<<endl;
	cout<<"Direccion de memoria: "<<dir_numero<<endl;
	cout<<"Direccion de memoria: "<<&dir_numero<<endl;
	
}
/*
-> Resultado de la ejecucion del programa
Numero: 10
Direccion de memoria: 0x6ffe0c
puntador
Numero: 10
Direccion de memoria: 0x6ffe0c
Direccion de memoria: 0x6ffe00



*/
