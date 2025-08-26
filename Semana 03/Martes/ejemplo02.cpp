/**
  Hacer un programa para ingresar por teclado un número entero. Calcular e informar si
  el nro es positivo, negativo o cero.

  Variante: No usar el else en la resolución.
*/

#include <iostream>
using namespace std;

int main(){
   int numero;

   cout << "Ingresar un número: ";
   cin >> numero;

   if (numero > 0){
      cout << "El número es positivo." << endl;
   }

   if (numero == 0){
      cout << "El número es cero." << endl;
   }

   if (numero < 0){
      cout << "El número es negativo." << endl;
   }

	return 0;
}
