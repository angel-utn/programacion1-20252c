#include <iostream>
using namespace std;

/**
  
  AL DECLARAR SE DEBE DIMENSIONAR LA CANTIDAD DE ELEMENTOS QUE QUEREMOS CREAR
  AL USAR (ASIGNAR O ACCEDER) SE DEBE ESPESIFICAR EL INDICE DEL ELEMENTO
  
  INDICE ES UN NUMERO ENTERO DEL 0 A N - 1, SIENDO N LA CANTIDAD DE ELEMENTOS
*/


int main(){
  /**
    para inicializar se puede utilizar el {}, y establecer el valor de cada elemento
    separado por coma.
    si no se establece un valor, el le pone cero.
  
  */
  int vec[7] = {}; /// este vector es de 7 elementos
  
  /*
  vec[3] = 10;
  
  cout << vec[3] << endl;
  
  int n;
  
  n = 4;
  
  vec[n] = 7;
  
  cout << vec[n] << endl;
  */
  /// cargar el vector
  /*
  for(int i=0; i<7; i++){
    cout << "Ingrese numero: ";
    cin >> vec[i];  
  }
  */
  
  /// mostrar el vector
  for(int i=0; i<7; i++){
    cout << vec[i] << endl;
  }
  
  return 0;
}
