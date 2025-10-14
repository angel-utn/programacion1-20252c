#include <iostream>
using namespace std;
#include "funciones.h"
#include "DiasSemana.h"
#include "funcionesNumericas.h"

void configurarConsumoTiposVela(string nombresTipoVela[3], float ceraPorTipoVela[3]){

   char decision;

    for(int i=0; i<3; i++){
      cout << "Tipo: " << nombresTipoVela[i] << endl;
      cout << "Cera x unidad: " << ceraPorTipoVela[i] << " kgs" << endl << endl;
    }

    cout << "¿Desea cambiar el consumo de kgs por cada tipo? (S/N) ";
    cin >> decision;

    if(decision == 'S' || decision == 's' || decision == 'Y' || decision == 'y'){
      cout << "Ingresar la cantidad de kilos por unidad de cada tipo de vela: " << endl;

      for(int i=0; i<3; i++){
         cout << "Cera x unidad para vela " << nombresTipoVela[i] << ": ";
         cin >> ceraPorTipoVela[i];
      }
    }
}

void mostrarPuntoB(int pedidosPorDia[7]){
   int i, numeroDia;
   string nombreDia;

   cout << "B) Cantidad de pedidos por día" << endl;

   for(i=0; i<7; i++){
      numeroDia = i + 1;
      nombreDia = obtenerNombreDia(numeroDia);
      cout << nombreDia << ": " << pedidosPorDia[i] << " pedidos." << endl;
   }
}


void mostrarPuntoC(int cantidadPorDia[7]){
   string nombreDia;
   int posicionMaximo;

   cout << "C) Día con mayor cantidad de velas" << endl;

   posicionMaximo = buscarPosicionMaximo(cantidadPorDia, 7);
   nombreDia = obtenerNombreDia(posicionMaximo + 1);

   cout << endl << "La maxima cantidad en un día fue: " << cantidadPorDia[posicionMaximo];
   cout <<  " y fue en el día " << nombreDia;

}

void mostrarPuntoD(std::string nombresTipoVela[3], float consumoTipoVela[3]){
   cout << "El punto D lo resuelven ustedes :-)" << endl;
}
