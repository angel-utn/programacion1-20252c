#include <iostream>
using namespace std;

int main(){
   int nroCompetidor, hora, nroCompetidorAnterior;
   float peso;

   // A
   float totalKilos;

   // B
   int cantCapturasPorLaTarde = 0;

   cout << "Número de competidor: ";
   cin >> nroCompetidor;

   while (nroCompetidor != 0){

      nroCompetidorAnterior = nroCompetidor;

      // A
      totalKilos = 0;

      while (nroCompetidor == nroCompetidorAnterior){

         cout << "Peso: ";
         cin >> peso;

         cout << "Horario: ";
         cin >> hora;

         // A
         totalKilos += peso;

         // B
         if (hora >= 13 && hora <= 18){
            cantCapturasPorLaTarde++;
         }

         cout << "Número de competidor: ";
         cin >> nroCompetidor;
      }

      // A
      cout << "A) Competidor # " << nroCompetidorAnterior << " --- Total de kilos: " << totalKilos << endl << endl;

   }

   // B
   cout << "B) Cantidad de capturas por la tarde: " << cantCapturasPorLaTarde << endl;


	return 0;
}
