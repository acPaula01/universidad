#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double pi = 3.14159265358979; 
    float rad,area,volumen;
    cout<< "Ingrese el radio de la esfera: ";
    cin>>rad;

    area = 4*pi*pow(rad,2);
    volumen = 1.334*pi*pow(rad,3);
    if(rad>0){
        cout<<"El area de la esfera es: "<<area<<endl;
    
        cout<<"El volumen de la esfera es: "<<volumen;
    }
    else{
        cout<<"El radio no puede ser negativo";
    }
    
        
    
    return 0;
}