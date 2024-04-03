#include<iostream>
using namespace std;
int main(){
	int numero = 10,*dir_numero;
	dir_numero =&numero;
	cout<<"Programa patra apuntadores"<<"\n\n\n";
	
	cout<<"Numero: "<<numero<<endl;
	cout<<"Direccion de memoria: "<<&numero<<endl;
	
	cout<<"\apuntador"<<endl;
	cout<<"Numero: "<<*dir_numero<<endl;
	cout<<"Direccion de memoria: "<<dir_numero<<endl;
	cout<<"Direccion de memoria: "<<&dir_numero<<endl;
	
}
