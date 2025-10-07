#include <iostream>
using namespace std;
#include "DiasSemana.h"

int main()
{
   // Ejercicio 1
   string nombreDias[7];
   cout << "Antes de llamar a la función: " << nombreDias[0] << endl;
   establecerNombreDias(nombreDias);
   cout << "Después de llamar a la función: " <<  nombreDias[0] << endl;

   cout << endl;
   // Ejercicio 2
   int numeroDia = 4;
   mostrarDiasPorNumeroDia(numeroDia);

   cout << endl;
   // Ejercicio 3
   numeroDia = 2;
   string nombreDia = obtenerNombreDia(numeroDia);

   if (nombreDia != ""){
      cout << "El nombre del día " << numeroDia << " es: " << nombreDia << endl;
   }

   return 0;
}
