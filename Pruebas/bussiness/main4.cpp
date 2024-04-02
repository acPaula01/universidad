#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3; 
    cout << "Digite tres numeros: " << endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if((num1+num2) == num3){
        cout<<"El tercero es la suma de los otros dos.";
    }
    else if ((num1+num3) == num2){
        cout<<"El segundo es la suma de los otros dos.";
    }
    else if((num3+num2) == num1){
        cout<<"El primero es la suma de los otros dos.";
    }
    else{
        cout<<"Ningun numero es igual a la suma de los otros dos.";
    }


    return 0;
}
