#include <iostream>
using namespace std;







int main() {
   int numero;
   
   /// pedir un numero
   cout << "Ingrese numero: ";
   cin >> numero;
   
   
   /// averiguar si es primo
   int cd = 0;
   for(int i=1; i<=numero; i++){
      if(numero%i == 0){
         cd++;
      }
   }
   
   /// mostrariamos el mensaje
   if(cd == 2){
      cout << "Es primo" << endl;
   }
   else{
      cout << "No es primo" << endl; 
   }
	
	return 0;
}

