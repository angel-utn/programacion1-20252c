#include <iostream>
using namespace std;

int main(){

   int i, numero, anterior;
   // A
   int cantImpares;
   // B
   int menorPar;


   cout << "Número: ";
   cin >> numero;

   for(i=1; i<=5; i++){

      cantImpares = 0;
      menorPar = 11; // Absurdo

      anterior = numero;

      while (numero >= anterior){

         if (numero % 2 != 0){
            cantImpares++;
         }
         else{

            if (menorPar == 11 || numero < menorPar){
               menorPar = numero;
            }
         }

         anterior = numero;

         cout << "Número: ";
         cin >> numero;
      }

      cout << endl << "Datos del grupo #" << i << endl;
      cout << "-------------------" << endl;
      cout << "A) Cant. Impares: " << cantImpares << endl;

      if (menorPar != 11){
         cout << "B) Menor par : " << menorPar << endl;
      }

      if (i != 5){
         cout << endl << "Número: " << numero << endl;
      }

   }

	return 0;
}
