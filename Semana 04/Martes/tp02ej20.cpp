/*
20

Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
A) La cantidad de personas mayores a 30 años que midan más de 1.8 metros.

B) El promedio de altura de las personas mayores a 30 años.
C) La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
D) La cantidad de personas cuya edad sea de 20, 30 o 40 años.

*/

#include <iostream>
using namespace std;

int main(){

   int edad;
   float altura;

   int cantidadPersonasPuntoA = 0;

   cout << "Ingresar edad: ";
   cin >> edad;

   cout << "Ingresar altura: ";
   cin >> altura;

   if (edad > 30 && altura > 1.8){
      cantidadPersonasPuntoA++;
   }

   cout << "Ingresar edad: ";
   cin >> edad;

   cout << "Ingresar altura: ";
   cin >> altura;

   if (edad > 30 && altura > 1.8){
      cantidadPersonasPuntoA++;
   }

   cout << "Ingresar edad: ";
   cin >> edad;

   cout << "Ingresar altura: ";
   cin >> altura;

   if (edad > 30 && altura > 1.8){
      cantidadPersonasPuntoA++;
   }

   cout << "Ingresar edad: ";
   cin >> edad;

   cout << "Ingresar altura: ";
   cin >> altura;

   if (edad > 30 && altura > 1.8){
      cantidadPersonasPuntoA++;
   }

   cout << "Ingresar edad: ";
   cin >> edad;

   cout << "Ingresar altura: ";
   cin >> altura;

   if (edad > 30 && altura > 1.8){
      cantidadPersonasPuntoA++;
   }

   cout << "Cantidad de personas con más de 30 años y más de 1.8mts: " << cantidadPersonasPuntoA << endl;


	return 0;
}
