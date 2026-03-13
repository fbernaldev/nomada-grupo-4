// Dada una fecha válida, determina la fecha del día siguiente.

// 31/12/2026 => 01/01/2027
// 10/05/2026 => 11/05/2026
// 28/02/2023 => 01/03/2023
// 29/02/2024 => 01/03/2024

// - Si el día no es el último del mes, sumas 1 al día
// - Si el día es el último del mes:
//    - pones 1 al día
//    - sumas 1 al mes
// - Si el mes es diciembre:
//    - mes = 1
//    - año + 1

#include <iostream>
using namespace std;

int main() {

    int dia, mes, anio, diasMaximos;

    cout<<"Ingresa el día, mes y año: ";
    cin>>dia>>mes>>anio; // 28 / 02 / 2026

    if(mes < 1 || mes > 12){
      cout<<"Fecha incorrecta."<<endl;
    }else{

      switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                diasMaximos = 31;
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                diasMaximos = 30;
                break;
        case 2:
                if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
                  diasMaximos = 29;
                }else{
                  diasMaximos = 28;
                }
                break;
      }

      if(dia >= 1 && dia <= diasMaximos){
        cout<<"Fecha correcta."<<endl;

        if(dia < diasMaximos){
        dia = dia + 1;
      }else{
        dia = 1;
        if(mes == 12){
          mes = 1;
          anio = anio + 1;
        }else{
          mes = mes + 1;
        }
      }

      cout<<"La fecha del día siguiente es: "<<endl;
      cout<<dia<<" / "<<mes<<" / "<<anio<<endl;

      }else{
        cout<<"Fecha incorrecta."<<endl;
      }

    }

    return 0;
}
