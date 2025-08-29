#include <iostream>
using namespace std;

/***
  // Seleccion simple o doble
  if(true){
    /// lado verdadero
  }

  if(false){
    /// lado verdadero
  }
  else{
    /// Lado falso
  }

  /// Seleccion multiple
  int VAR =  1 2 3
  switch(VAR){
    case 1:
      /// Hago algo
      break;
    case 2:
      /// hago algo
      break;
    case 3:
      /// hago algo
      break;

    defaut:
      /// Hago algo
  }
  
  char  VAR =  A B C
  switch(VAR){
    case 'A':
      /// Hago algo
      break;
    case 'B':
      /// hago algo
      break;
    case 'C':
      /// hago algo
      break;

    defaut:
      /// Hago algo
  }


*/

int main()
{
  int opcion;

  cout << "Ingrese opcion: ";
  cin >> opcion;

  switch(opcion)
  {
  case 1:
    cout << "Seleccionaste la primer opcion!" << endl;
    break;
  case 10:
    cout << "Seleccionaste el 10 como numero!" << endl;
    break;
  default:
    cout << "La opcion no es correcta!" << endl;  
  }


  cout << "Esto lo ejecuto fuera del switch!" << endl;
  return 0;
}



