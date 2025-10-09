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

int buscarValorMaximo(int vec[], int tamanio){

   int i, maximo;

   maximo = vec[0];

   for(i=1; i<tamanio; i++){
      if (vec[i] > maximo){
         maximo = vec[i];
      }
   }

   return maximo;

}

int buscarValorMinimo(int vec[], int tamanio){

   int i, minimo;

   minimo = vec[0];

   for(i=1; i<tamanio; i++){
      if (vec[i] < minimo){
         minimo = vec[i];
      }
   }

   return minimo;
}
