// Define una función valorAbsoluto sobrecargada para recibir números enteros
// y double para que funcione con ambos tipos de datos.

// |3| = 3
// |-9| = 9

#include <iostream>

using namespace std;

int valorAbsoluto(int n){
  if(n < 0){
    return -n;
  }
  return n;
}

double valorAbsoluto(double n){
  if(n < 0.0){
    return -n;
  }
  return n;
}

int main() {

    int a = -7;
    int b = 4;

    cout<<"Valor absoluto (-7): "<<valorAbsoluto(a)<<endl;
    cout<<"Valor absoluto (4): "<<valorAbsoluto(b)<<endl;

    double c = -3.75;
    double d = 2.5;

    cout<<"Valor absoluto (-3.75): "<<valorAbsoluto(c)<<endl;
    cout<<"Valor absoluto (2.5): "<<valorAbsoluto(d)<<endl;


    return 0;
}
