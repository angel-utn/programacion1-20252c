/**
  Hacer un programa para ingresar por teclado un número entero. Calcular e informar si
  el nro es positivo, negativo o cero.
*/

#include <iostream>
using namespace std;

int main(){
   int numero;

   cout << "Ingresar un número: ";
   cin >> numero;

   /**
      Operadores Relacionales
      -----------------------
      	==	   Igual que
         !=	   Distinto que
         >	   Mayor que
         <	   Menor que
         <=	   Menor o igual que
         >=	   Mayor o igual que
*/

   if (numero > 0){
      cout << "El número es positivo." << endl;
   }
   else{
      if (numero == 0){
         cout << "El número es cero." << endl;
      }
      else{
         cout << "El número es negativo" << endl;
      }
   }


	return 0;
}
