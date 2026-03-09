// Encuentra el mayor valor de tres números dados.

// a b c

#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout<<"Ingresa los tres números: ";
    cin>>a>>b>>c;

    if(a >= b && a >= c){
      cout<<"El mayor es: "<<a;
    }else if(b >= a && b >= c){
      cout<<"El mayor es: "<<b;
    }else{
      cout<<"El mayor es: "<<c;
    }

    return 0;
}
