#include <iostream>
using namespace std;

#include "DiasSemana.h"

void establecerNombreDias(string nombres[7]){
   nombres[0] = "Lunes";
   nombres[1] = "Martes";
   nombres[2] = "Miercoles";
   nombres[3] = "Jueves";
   nombres[4] = "Viernes";
   nombres[5] = "Sabado";
   nombres[6] = "Domingo";
}

void mostrarDiasPorNumeroDia(int numeroDia){

   if (numeroDia < 1 || numeroDia > 7){
      return;
   }

   string nombresDias[7];
   establecerNombreDias(nombresDias);

   int i;
   for(i = numeroDia-1 ; i < 7; i++){
      cout << nombresDias[i] << endl;
   }
}

std::string obtenerNombreDia(int numeroDia){

   if (numeroDia < 1 || numeroDia > 7){
      return "";
   }

   string nombresDias[7], nombre;
   establecerNombreDias(nombresDias);

   nombre = nombresDias[numeroDia - 1];
   return nombre;
}
