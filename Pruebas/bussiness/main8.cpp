#include <iostream>

using namespace std;

int main()
{
    int opcion;
    float valorConvertir;
    cout << "Seleccione la opcion de conversion que requiere: " <<endl;       
    cout<<"1) Para convertir de pulgadas a milimetros"<<endl;
    cout<<"2) Para convertir de yardas a metros"<<endl;
    cout<<"3) Para convertir de millas a kilometros"<<endl;
    cin>>opcion;
    
    
    if(!(opcion>=1 && opcion<=3)) cout<<"La opcion ingresada no es valida";
    else{
        cout<< "Digite el valor a convertir: ";
        cin>>valorConvertir;
        if(valorConvertir < 1) cout<< "El valor a convertir es invalido.";
        //manera mas facil que poner if 
        switch(opcion){
            case 1:
                cout<<valorConvertir<<" pulgadas es equivalente a "<< float(valorConvertir * 25.40)<<" milimetros";
            break;
            case 2:
                cout<<valorConvertir<<" yardas es equivalente a "<<float(valorConvertir* 0.9144)<<"metros";
            break;
            case 3:
                cout<<valorConvertir<<" millas es equivalente a "<< float(valorConvertir * 1.6093)<<"kilometros";
            break;    
        }
    }
    
        
    
    return 0;
}
