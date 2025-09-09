/*
  Ingresar 5 numeros enteros y calcular e informar:
  - La posición del primer y segundo impar ingresado.
*/

#include <iostream>
using namespace std;

int main(){

   int j, num, resto;
   int cantImpares = 0;
   int posicionPrimerImpar = 0;
   int posicionSegundoImpar = 0;

   for(j=1; j<=5; j++){
      cout << "Ingresar el número #" << (j) << ": ";
      cin >> num;

      // A
      resto = num % 2;
      if (resto != 0){
         cantImpares++;

         if (cantImpares == 1){
            // primerImpar = num; // Si quisiera saber cuál fue el primer impar
            posicionPrimerImpar = j;
         }
         else{
            if (cantImpares == 2){
               // segundoImpar = num; // Si quisiera saber cuál fue el segundo impar
               posicionSegundoImpar = j;
            }
         }
      }
   }
   cout << endl;

   if (cantImpares == 0){
      cout << "No hubo impares" << endl;
   }
   else{
      if (cantImpares >= 1){
         cout << "Posición del primer impar: " << posicionPrimerImpar << endl;
      }
      if (cantImpares >= 2){
         cout << "Posición del segundo impar: " << posicionSegundoImpar << endl;
      }
   }


	return 0;
}
