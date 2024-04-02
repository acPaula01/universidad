#include <iostream>

using namespace std;

int main()
{
    int capital;
    float tasaInteres,semanas;
    cout << "Digite el capital a depositar: " << endl;
    cin>>capital;
    cout << "Digite la tasa de interes en porcentaje %: " << endl;
    cin>>tasaInteres;
    cout << "Digite las semanas de duracion del deposito: " << endl;
    cin>>semanas;
    
    semanas = semanas * 7; //numero de dias
    tasaInteres = tasaInteres/100;
    float total = capital + (((capital*tasaInteres)/365)*semanas);
    
    if(capital<0){
        cout<<"El capital debe ser un valor positivo";  
    }
    else if(tasaInteres<0){
        cout<<"El interes debe ser un valor positivo";
    }
    else if (semanas<0)
    {
        cout<<"El tiempo debe ser un valor positivo";
    }
    else{
        cout<<"El capital acumulado al final del periodo es: "<<total;//x es resultado
    }

    return 0;
}
