/*
21
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises.
Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
A - Cantidad total de carteras vendidas en total.
B - Cuántas carteras quedaron de cada tipo.
C - Los colores de carteras que no se vendieron.

NOTA: Ninguna venta superará las 10 carteras.

*/

#include <iostream>
using namespace std;

int main(){

   int cantidad, tipo;

   // A)
   int cantidadCarterasVendidas = 0;

   // B)
   int blancas = 45, negras = 50, marrones = 40, grises = 49;

   // C)
   bool blancas_vendidas = false, negras_vendidas = false, marrones_vendidas = false, grises_vendidas = false;

   cout << "Venta #1" << endl;
   cout << "-------------" << endl;
   cout << "Cantidad de carteras: ";
   cin >> cantidad;
   cout << "Tipo de cartera (1 - Blanca, 2 - Negra, 3 - Marrón, 4 - Gris) : ";
   cin >> tipo;

   // A)
   cantidadCarterasVendidas += cantidad;

   // B) y C)
   switch (tipo){
      case 1:
         blancas -= cantidad;
         blancas_vendidas = true;
      break;

      case 2:
         negras -= cantidad;
         negras_vendidas = true;
      break;

      case 3:
         marrones -= cantidad;
         marrones_vendidas = true;
      break;

      case 4:
         grises -= cantidad;
         grises_vendidas = true;
      break;
   }

   cout << "Venta #2" << endl;
   cout << "-------------" << endl;
   cout << "Cantidad de carteras: ";
   cin >> cantidad;
   cout << "Tipo de cartera (1 - Blanca, 2 - Negra, 3 - Marrón, 4 - Gris) : ";
   cin >> tipo;

   // A)
   cantidadCarterasVendidas += cantidad;

   // B) y C)
   switch (tipo){
      case 1:
         blancas -= cantidad;
         blancas_vendidas = true;
      break;

      case 2:
         negras -= cantidad;
         negras_vendidas = true;
      break;

      case 3:
         marrones -= cantidad;
         marrones_vendidas = true;
      break;

      case 4:
         grises -= cantidad;
         grises_vendidas = true;
      break;
   }

   cout << "Venta #3" << endl;
   cout << "-------------" << endl;
   cout << "Cantidad de carteras: ";
   cin >> cantidad;
   cout << "Tipo de cartera (1 - Blanca, 2 - Negra, 3 - Marrón, 4 - Gris) : ";
   cin >> tipo;

   // A)
   cantidadCarterasVendidas += cantidad;

   // B) y C)
   switch (tipo){
      case 1:
         blancas -= cantidad;
         blancas_vendidas = true;
      break;

      case 2:
         negras -= cantidad;
         negras_vendidas = true;
      break;

      case 3:
         marrones -= cantidad;
         marrones_vendidas = true;
      break;

      case 4:
         grises -= cantidad;
         grises_vendidas = true;
      break;
   }


   cout << endl << "Resultados" << endl;
   cout << "A) Cantidad total de carteras vendidas: " << cantidadCarterasVendidas << endl << endl;
   cout << "B) Stock final de cada cartera: " << endl;
   cout << "Blancas  : " << blancas << endl;
   cout << "Negras   : " << negras << endl;
   cout << "Marrones : " << marrones << endl;
   cout << "Grises   : " << grises << endl << endl;

   cout << "C) Colores de carteras que no fueron vendidos: " << endl;

   if (blancas_vendidas == false){
      cout << "Blancas" << endl;
   }

   if (negras_vendidas == false){
      cout << "Negras" << endl;
   }

   if (marrones_vendidas == false){
      cout << "Marrones" << endl;
   }

   if (grises_vendidas == false){
      cout << "Grises" << endl;
   }

	return 0;
}
