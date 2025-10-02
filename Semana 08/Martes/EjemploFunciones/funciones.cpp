#include "funciones.h"

bool esPrimo(int numero){

   //return contarDivisores(numero) == 2;

   int cantDiv = contarDivisores(numero);

   if (cantDiv == 2){
      return true;
   }
   else{
      return false;
   }
}

int contarDivisores(int numero){
   int i, cantDivisores = 0;

   for(i=1; i<=numero; i++){
      if (numero % i == 0){
         cantDivisores++;
      }
   }

   return cantDivisores;
}
