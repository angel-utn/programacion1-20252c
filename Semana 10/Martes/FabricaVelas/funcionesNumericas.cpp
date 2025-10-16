#include <iostream>
using namespace std;

#include "funcionesNumericas.h"

int obtenerCantidadApariciones(int vec[], int tamanio, int valorBuscado){

   int i;
   int cantidadApariciones = 0;

   for(i=0; i<tamanio; i++){
      if (vec[i] == valorBuscado){
         cantidadApariciones++;
      }
   }

   return cantidadApariciones;
}

int buscarPosicionMaximo(int vec[], int tamanio){

   int i, maximo, posicionMaximo;

   maximo = vec[0];
   posicionMaximo = 0;

   for(i=1; i<tamanio; i++){
      if (vec[i] > maximo){
         maximo = vec[i];
         posicionMaximo = i;
      }
   }

   return posicionMaximo;

}
