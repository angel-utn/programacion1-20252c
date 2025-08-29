#include <iostream>
using namespace std;

/***
  una bandera es una variable el cual cada valor es fijo, conocido y
  cada valor tiene un significado

*/

/***
  Dado una lista de 3 numeros enteros
  Indicar con un cartel aclaratorio:
    "No hay positivos" si ninguno es positivo
    "Hay positivos" si alguno es positivo
*/

int main()
{
  int num1, num2, num3;
  bool hayPositivos = false;

  cout << "Ingrese numero: ";
  cin >> num1;
  cout << "Ingrese numero: ";
  cin >> num2;
  cout << "Ingrese numero: ";
  cin >> num3;

  if(num1  > 0){
    hayPositivos = true;  
  }
  
  if(num2 > 0) {
    hayPositivos = true;  
  }
  
  if( num3 > 0){
    hayPositivos = true;  
  }
    
  if(hayPositivos == true){
    cout << "Hay positivos" << endl;  
  }
  else{
    cout << "No hay positivos" << endl;  
  }
  

  return 0;
}



