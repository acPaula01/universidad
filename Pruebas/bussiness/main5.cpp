#include <iostream>

using namespace std;

int main()
{
    long int precioVehiculo;
    float cuotaInical;
    int cuotas;
    cout << "Digite el precio del vehiculo: " << endl;
    cin>>precioVehiculo;
    
    if(precioVehiculo<1){
        cout<<"El precio debe ser positivo.";
    }

    cout << "Digite el porcentaje de la cuota inicial: " << endl;
    cin>>cuotaInical;
    
    if(cuotaInical<0){
        cout<<"El porcentaje escogido es invalido.";
    }
    
    cout << "Digite la cantidad de cuotas sin intereses acordadas: " << endl;
    cin>>cuotas;

    if(cuotas<0){
        cout<<"La cantidad de cuotas debe ser positivo.";
    }

    cuotaInical = (precioVehiculo * (cuotaInical/100));
    float t = (precioVehiculo-cuotaInical)/cuotas;

    cout<<"La cuota inicial es de: "<<cuotaInical<<endl;//I es una variable
    cout<<"La mensualidad sin interes es de: "<<t;//M es una variable
        
    
    return 0;
}