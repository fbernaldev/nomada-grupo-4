// Elabora un programa que resuelva una ecuación de primer grado.

// ax + b = 0
// x = -b / a

#include <iostream>
using namespace std;

int main() {

    float a, b, x;

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    if(a != 0){
      x = -b / a;
      cout<<"El valor de X es: "<<x<<endl;
    }else{
      cout<<"La ecuación no tiene solución."<<endl;
    }

    return 0;
}
