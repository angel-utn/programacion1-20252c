/**
  Ingresar una lista de 5 números enteros. Calcular e informar cuántos fueron positivos.
*/
#include <iostream>
using namespace std;

int main(){
   const int CANT = 5;
   int n, i, cantPositivos;
   cantPositivos = 0;

   for(i=1; i<=CANT; i++){

      cout << "Ingresar un número entero: ";
      cin >> n;

      if (n > 0){
         cantPositivos++;
      }

   }

   cout << endl << "Cantidad de positivos: " << cantPositivos << endl;
	return 0;
}
