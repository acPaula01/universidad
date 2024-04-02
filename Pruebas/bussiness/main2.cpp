#include <iostream>

using namespace std;


int main()
{
    //b=base y h=h
    float b,h;
    cout << "Digite la base y altura de un triangulo: " << endl;
    cin>>b;
    cin>>h;
    if (b <= 0){
        cout<<"La base no puede ser cero o negativa";
    }
    if(h<=0){
        cout<<"La altura no puede ser cero o negativa";
    }
    else if(b>0 && h>0){
        cout << "El area del triangulo es: "; // X es una variable
        cout<<(b*h)/2;
    }

    return 0;
}