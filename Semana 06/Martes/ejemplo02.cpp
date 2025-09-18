/**
   Una fábrica necesita producir al menos 10000 unidades para cumplir con un
   pedido especial. Se solicita un programa que permita registrar las órdenes de
   producción realizadas hasta que se alcance o supere la meta.

   Por cada orden de producción se debe registrar:
   - La cantidad de unidades producidas.
   - El tiempo en minutos que demandó.

   Al finalizar, el programa debe emitir:
   A) El tiempo total en minutos que llevó cumplir con el pedido y la cantidad de
   órdenes realizadas.
   B) El promedio de unidades producidas por minuto considerando la producción
   total.
*/
#include <iostream>
using namespace std;

int main(){

   const int UNIDADES_PEDIDO = 10000;
   int cant = 1;
   // Carga de datos
   int unidadesProducidas, tiempoMinutos;

   // Llevar el control while
   int totalUnidadesProducidas = 0;

   /// A
   int tiempoTotalMinutos = 0;

   /// B
   float promedioPiezasMinuto;

   while (totalUnidadesProducidas < UNIDADES_PEDIDO){

      cout << "ORDEN DE PRODUCCIÓN #" << cant << endl;
      cout << "Cantidad de unidades producidas: ";
      cin >> unidadesProducidas;

      cout << "Tiempo en minutos: ";
      cin >> tiempoMinutos;


      totalUnidadesProducidas += unidadesProducidas;
      tiempoTotalMinutos += tiempoMinutos;
      cant++;

      if (totalUnidadesProducidas < UNIDADES_PEDIDO){
         cout << "Restan para cumplir el pedido: " << UNIDADES_PEDIDO - totalUnidadesProducidas << endl;
      }
      else{
         cout << "Objetivo del pedido cumplido!!!" << endl;
      }

      cout << endl;
   }

   cout << endl;
   cout << "A) Tiempo total en minutos: " << tiempoTotalMinutos << endl;

   promedioPiezasMinuto = (float) totalUnidadesProducidas / tiempoTotalMinutos;
   cout << "B) Promedio de piezas por minuto: " << promedioPiezasMinuto << endl;


	return 0;
}
