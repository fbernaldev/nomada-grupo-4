// Una llamada telefónica cuesta S/. 0.50 por los tres primeros minutos. Cada minuto adicional es un paso de contador
// y cuesta S/. 0.1. Calcula el monto de una llamada cualquiera.

#include <iostream>
using namespace std;

int main() {

    int minutos;
    float costo;

    cout<<"Ingresa la duración de la llamada: ";
    cin>>minutos;

    if(minutos > 0 && minutos <= 3){
      costo = 0.5;
    }else{
      costo = 0.5 + (minutos - 3) * 0.1;
    }

    cout<<"El costo de la llamada es: S/."<<costo<<endl;

    return 0;
}
