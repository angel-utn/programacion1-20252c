#include <iostream>
using namespace std;

/***
  for(inicializacion ; comparacion  ; incremento){                                                         
    /// instrucciones a repetir
  }
  
  
  incrementar
    inicial = inicio
    condicion = <= fin
    increment = +
  
  decreementar:
    inicial = fin
    condicion = >= inicio
    incremento = -

*/

int main(){
  int numero;
  for(int i=1; i<=10; i++){
    cout << "Hola #" << i << endl;
  }
  cout << "------------" << endl;
  for(int i=10; i<=15; i+=2){
    cout << "Hola #" << i << endl;
  }
  cout << "------------" << endl;
  cout << "Ingrese la cantidad de numeros a mostrar: ";
  cin >> numero;
  
  for(int i=1; i<=numero; i++){
    cout << i << " ";
  }
  cout << endl;
  cout << "------------" << endl;
  
  for(int i=numero; i>=1; i--){
    cout << i << " ";
  }
  
  
  return 0;
}
