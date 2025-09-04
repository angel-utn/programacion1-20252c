#include <iostream>
using namespace std;

/***
  dada una lista de 5 numeros 
  indicar cuantos de ellos son positivos
  
  /// Estrategia
  cargar 5 numeros
    por cada numero contar si son postivos
  mostrar cantidad
*/

int main(){
  int numero, cantidadPostivos = 0;
  
  ///cargar 5 numeros
  for(int i=1; i<=5; i++){
    cout << "Ingrese numero: ";
    cin >> numero;
    
    /// verifica si es positivo
    if(numero > 0){
      /// cuento
      cantidadPostivos++;
    }
  }
  /// mostrar cantidad
  cout << "La cantidad de positivos son: " << cantidadPostivos << endl;
  return 0;
}
