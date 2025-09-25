#include <iostream>
using namespace std;

/**
   devolver no es lo mimso que mostrar... 
   el resultado de una funcion no es lo mismo que mostrar... 
*/

/// declaracion
bool esPrimo(int num);
bool esDivisible(int dividendo, int divisor);



int main() {
   int numero;
   bool res;
   /// pedir un numero
   cout << "Ingrese numero: ";
   cin >> numero;
   
   /// averiguar si es primo
   /// mostrariamos el mensaje
   if(esPrimo(numero)){
      cout << "Es primo" << endl;
   }
   else{
      cout << "No es primo" << endl; 
   }
	
	return 0;
}

/// implementar
bool esPrimo(int num){
   int cd = 0;
   for(int i=1; i<=num; i++){
      if(esDivisible(num, i)){
         cd ++;
      }
   }
   
   if(cd == 2){
      return true;
   }
   else{
      return false;
   }
}

bool esDivisible(int dividendo, int divisor){
   if(divisor == 0){
      return false; /// terminar
   }
   
   if(dividendo % divisor == 0){
      return true;
   }
   else{
      return false;
   }
}



