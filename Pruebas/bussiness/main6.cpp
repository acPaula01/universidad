#include <iostream>

using namespace std;

int main()
{
    //tomando semanas completas es decir sin 2.5 semanas, si no 2, semanas enteras
    int capital;
    float tasaInteres;
    cout << "Digite el capital a depositar: " << endl;
    cin>>capital;
    if(capital<0){
        cout<<"El capital debe ser un valor positivo";
    }

    cout << "Digite la tasa de interes en porcentaje %: " << endl;
    cin>>tasaInteres;
    if(tasaInteres<0){
        cout<<"El interes debe ser un valor positivo";
    }

    cout << "Digite las semanas de duracion del deposito: " << endl;

    cout<<"El tiempo debe ser un valor positivo";

    cout<<"El capital acumulado al final del periodo es: X";//x es resultado


    return 0;
}
