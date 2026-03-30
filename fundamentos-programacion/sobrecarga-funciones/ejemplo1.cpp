#include <iostream>

using namespace std;

void imprimir(int numero){
    cout<<"Número entero: "<<numero<<endl;
}

void imprimir(double numero){
    cout<<"Número decimal: "<<numero<<endl;
}

void imprimir(string texto){
    cout<<"Texto: "<<texto<<endl; // Texto: Hola
}

int main() {

    imprimir(5);
    imprimir(3.14);
    imprimir("Hola");

    return 0;
}
