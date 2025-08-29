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

  cout << "Ingrese numero: ";
  cin >> num1;
  cout << "Ingrese numero: ";
  cin >> num2;
  cout << "Ingrese numero: ";
  cin >> num3;

  if(num1 <=0 && num2 <= 0 && num3 <= 0)
  {
    cout << "No hay positivos" << endl;
  }
  else
  {
    cout << "Hay positivos" << end;
  }


  return 0;
}



