#include <iostream>
using namespace std;
/***
Hacer un programa que pida una constraseña de 3 digitos
El programa debe mostrar un mensaje si el usuario acerto
el numero (556)
Tener en cuenta que tienen 3 intentos.
Si no lo loga en los 3 intento le debe mostrar 
"Acceso denegado"
*/

int main() {
   const int CLAVE_REAL = 556;
   int clave;
   
   cout << "Ingrese clave: ";
   cin >> clave;
   
      
   if(CLAVE_REAL == clave ){
      cout << "Acceso aceptado!" << endl;
   }
   else {
      cout << "Clave incorrecta... Ingrese otra clave: ";
      cin >> clave;
      if(CLAVE_REAL == clave){
         cout << "Acceso aceptado!" << endl;   
      }
      else{
         cout << "Clave incorrecta... Ingrese otra clave: ";
         cin >> clave;
         if(CLAVE_REAL == clave){
            cout << "Acceso aceptado!" << endl;   
         }
         else{
            cout << "Acceso denegado...." << endl;
         }
      }
   }
   
	
	return 0;
}

