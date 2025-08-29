#include <iostream>
using namespace std;

/***

  Banderas
    Son valariables que almacenana valores fijos,
    conocidos y son significado
  Contadores
    Son variables que almanacenan numeros y siguen una progresion fijo

    1- Se debe inicializar con un valor, generalmente es cero
    2- Se debe hacer una operacion
      C = C + IN
      C = C + 1 => C = C - 1
      C += 1    => C -= 1
      C++       => C--
    3- Generalemte esta ligada a una condicion


  Acumuladores
  Son variables que almanacenan numeros variables

    1- Se debe inicializar con un valor, generalmente es cero
    2- Se debe hacer una operacion
      A = A + VALOR
      A = A + N => A = A - N
      A += N    => A -= N
    3- Generalemte esta ligada a una condicion
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
  bool cantidadPositivos = 0;

  cout << "Ingrese numero: ";
  cin >> num1;
  cout << "Ingrese numero: ";
  cin >> num2;
  cout << "Ingrese numero: ";
  cin >> num3;

  if(num1  > 0)
  {
    cantidadPositivos++;
  }

  if(num2 > 0)
  {
    cantidadPositivos++;
  }

  if( num3 > 0)
  {
    cantidadPositivos++;
  }

  if(cantidadPositivos > 0)
  {
    if(cantidadPositivos == 3)
    {
      cout << "Todos son positivos"  << endl;
    }
    else
    {
      cout << "Hay positivos" << endl;
    }
  }
  else
  {
    cout << "No hay positivos" << endl;
  }


  return 0;
}



