// Escribe un programa que solicite la edad de una persona y determine
// si es mayor de edad (18 años o más) o no.

#include <iostream>
using namespace std;

int main() {

    int edad;
    cout<<"Ingresa tu edad: ";
    cin>>edad; //12

    if(edad >= 18){
      cout<<"Eres mayor de edad."<<endl;
    }else{
      cout<<"Eres menor de edad."<<endl;
    }

    cout<<"Esto es una actualización"<<endl;

    return 0;
}
