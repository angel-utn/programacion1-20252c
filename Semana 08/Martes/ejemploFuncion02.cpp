#include <iostream>
using namespace std;

/// Declaración

/// La función va a recibir un número y determinar si es primo o no. Si es primo devuelve true sino devuelve false.
bool esPrimo(int numero);
int contarDivisores(int numero);

int main(){
   int i;

   for(i=1; i<50; i++){
      if (esPrimo(i) == true){
         cout << i << " es primo." << endl;
      }
   }

	return 0;
}


/// Definición
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
