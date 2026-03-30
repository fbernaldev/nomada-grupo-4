#include <iostream>

using namespace std;

double area(double lado){
    return lado * lado;
}

double area(double largo, double ancho){
    return largo * ancho;
}

double area(int radio){
    const double PI = 3.14159;
    return PI * radio * radio;
}

int main() {

    cout<<"Área del cuadrado: "<<area(4.0)<<endl;
    cout<<"Área del rectángulo: "<<area(5.0, 3.0)<<endl;
    cout<<"Área del círculo: "<<area(3)<<endl;

    return 0;
}
