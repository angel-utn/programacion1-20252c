/**
Un profesor desea determinar si sus alumnos cumplieron o no los requisitos
mínimos para aprobar su materia.
Los requisitos de aprobación son:
- Tener al menos un 6 o más en ambos parciales o un 8 o más en el trabajo práctico integrador.

Hacer un programa para ingresar las notas de ambos parciales y del trabajo
práctico integrador y determinar el estado del alumno ("Aprobado",
"Desaprobado").
*/
#include <iostream>
using namespace std;

int main(){

   int parcial1, parcial2, integradora;

   cout << "Ingresar la nota del parcial 1: ";
   cin >> parcial1;

   cout << "Ingresar la nota del parcial 2: ";
   cin >> parcial2;

   cout << "Ingresar la nota del trabajo práctico integrador: ";
   cin >> integradora;

   if ((parcial1 >= 6 && parcial2 >=6) || (integradora >= 8)){
      cout << "El estado es: Aprobado" << endl;
   }
   else{
      cout << "El estado es: Desaprobado" << endl;
   }

	return 0;
}
