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

  los valores del switch siempre son unicamente valores int o char
  El switch lo vamos a utilizar unicamente 
  si los valores son fijos y conocidos

*/

int main()
{
  char opcion;

  cout << "Ingrese opcion: ";
  cin >> opcion;

  switch(opcion)
  {
  case 'A':
  case 'a':
    cout << "Seleccionaste la primer opcion!" << endl;
    break;
  case 'B':
  case 'b':  
    cout << "Seleccionaste el B como opcion!" << endl;
    break;
  default:
    cout << "La opcion no es correcta!" << endl;  
  }


  cout << "Esto lo ejecuto fuera del switch!" << endl;
  return 0;
}



