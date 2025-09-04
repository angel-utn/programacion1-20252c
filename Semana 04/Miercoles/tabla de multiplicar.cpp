#include <iostream>
using namespace std;

/***
  Dado un numero mostrar la tabla de multiplicar de dicho numero
*/

int main(){
  int numero;
  
  cout << "Ingrese el numero para mostrar la tabla: ";
  cin >> numero;
  
  /// Mostrar la tabla de multiplicacion
  for(int v=1; v<=10; v++){
    cout << numero << " x " << v  << " = " << numero * v << endl;
  }
  /*
  cout << numero << " x 1" << " = " << numero * 1 << endl;
  cout << numero << " x 2" << " = " << numero * 2 << endl;
  cout << numero << " x 3" << " = " << numero * 3 << endl;
  cout << numero << " x 4" << " = " << numero * 4 << endl;
  cout << numero << " x 5" << " = " << numero * 5 << endl;
  cout << numero << " x 6" << " = " << numero * 6 << endl;
  cout << numero << " x 7" << " = " << numero * 7 << endl;
  cout << numero << " x 8" << " = " << numero * 8 << endl;
  cout << numero << " x 9" << " = " << numero * 9 << endl;
  cout << numero << " x 10" << " = " << numero * 10 << endl;
  */
  
  
  return 0;
}
