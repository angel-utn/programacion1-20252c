/**
Hacer un programa que solicite números enteros positivos/cero hasta que se ingrese
un número negativo.

El programa debe emitir:
A) El porcentaje de números pares y de números impares.
B) El promedio de números.

En todos los casos se debe excluir al número negativo para el cálculo de los
resultados.

*/
#include <iostream>
using namespace std;

int main(){
   int num;

   /// A
   int cantPares = 0, cantImpares = 0, cantNumeros = 0, resto;
   float porcPares, porcImpares;

   /// B
   int sumaNumeros = 0, cantidadNumeros = 0;
   float promedio;

   cout << "Ingrese un número: ";
   cin >> num;

   while (num >= 0){

      /// A
      resto = num % 2;
      if (resto == 0){
         cantPares++;
      }
      else{
         cantImpares++;
      }

      /// B
      sumaNumeros += num;
      cantidadNumeros++;

      cout << "Ingrese un número: ";
      cin >> num;
   }

   /// Mostrar A
   cantNumeros = cantPares + cantImpares;
   porcPares = (cantPares * 100.0 / cantNumeros);
   porcImpares = (cantImpares * 100 / (float) cantNumeros);

   cout << endl << "Punto A" << endl;
   cout << "Porcentaje de pares  : " << porcPares << endl;
   cout << "Porcentaje de impares: " << porcImpares << endl;

   /// Mostrar B
   promedio = (float) sumaNumeros / cantidadNumeros;
   cout << endl << "Punto B " << endl;
   cout << "Promedio de números: " << promedio << endl;

	return 0;
}
