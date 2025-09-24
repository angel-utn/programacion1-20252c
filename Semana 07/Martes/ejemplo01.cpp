#include <iostream>
using namespace std;

int main(){
   int grupo, registro;

   int num;

   /// A
   int mayor;

   /// B
   int cantPositivosTotales = 0;

   /// C
   int cantPositivosGrupo;

   for(grupo=1; grupo <= 3; grupo++){

      cout << "Grupo: #" << grupo << endl;
      cantPositivosGrupo = 0; // Acá está la instrucción clave que restablece el contPositivos por cada grupo nuevo

      for(registro=1; registro <= 5; registro++){

         cout << "\tNúmero: ";
         cin >> num;

         if (registro == 1 || num > mayor){
            mayor = num;
         }

         if (num > 0){
            cantPositivosTotales++;
            cantPositivosGrupo++;
         }

      }

      cout << "A) Mayor del grupo #" << grupo << " es: " << mayor << endl;
      cout << "C) La cantidad de positivos del grupo fueron: " << cantPositivosGrupo << endl << endl;

   }

   cout << endl << "B) La cantidad de positivos totales fueron: " << cantPositivosTotales << endl;

	return 0;
}
