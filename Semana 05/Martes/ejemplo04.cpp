/*
  Hacer un programa para ingresar cinco números distintos entre sí y listar:
  - La cantidad de números pares de la lista
  - La suma de números negativos de la lista
  - El valor más pequeño de la lista y en qué posición se encontraba
*/

#include <iostream>
using namespace std;

int main(){

   int j, num;

   // A
   int cantPares = 0, resto;

   // B
   int sumaNegativos = 0;
   bool hayNegativos = false;

   // C
   int minimo, posicionMinimo;


   for(j=1; j<=5; j++){
      cout << "Ingresar un número: ";
      cin >> num;

      // A
      resto = num % 2;
      if (resto == 0){
         cantPares++;
      }

      // B
      if (num < 0){
         sumaNegativos += num;
         hayNegativos = true;
      }

      // C
      if ((j == 1) || (num < minimo)){
         minimo = num;
         posicionMinimo = j;
      }

   }

   cout << endl;
   cout << "A) Cantidad de pares: " << cantPares << endl;

//   if (hayNegativos == true){
//      cout << "B) Suma de negativos: " << sumaNegativos << endl;
//   }
//   else{
//      cout << "B) No hay negativos" << endl;
//   }

   if (sumaNegativos != 0){
      cout << "B) Suma de negativos: " << sumaNegativos << endl;
   }
   else{
      cout << "B) No hay negativos" << endl;
   }

   cout << "C) Valor mínimo: " << minimo << endl;
   cout << "   Posicion    : " << posicionMinimo << endl;



	return 0;
}
