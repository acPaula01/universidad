#include <iostream>

using namespace std;

int main()
{
    int sueldo;
    float aumento;
    cout << "Digite el sueldo del trabajador: ";
    if(sueldo<0){
        cout<<"El sueldo debe ser positivo";       
    }
    else {
        cout<<"El nuevo sueldo del trabajador es: X";
        if(sueldo<10000){
            aumento = sueldo*0.15;
        }
        else if(sueldo>= 10000 && sueldo<=15000){
            aumento = sueldo*0.11;
        }
        else{
            aumento = sueldo*0.08;
        }
    }

    
    return 0;
}