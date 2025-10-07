#include <iostream>
using namespace std;
#include "funcionesNumericas.h"

int main()
{
   int vec1[10] = { 1, 2, 2, 2, 3, 3, 5, 5, 5, 5 };
   int vec2[5] = { 2, 2, 2, 2, 2 };

   cout << "Ejercicio 1" << endl;
   int cantApariciones, valorBuscado = 2;

   cantApariciones = obtenerCantidadApariciones(vec1, 10, valorBuscado);
   cout << "El número " << valorBuscado << " aparece " << cantApariciones << " veces en el vector 1." << endl;

   cantApariciones = obtenerCantidadApariciones(vec2, 5, valorBuscado);
   cout << "El número " << valorBuscado << " aparece " << cantApariciones << " veces en el vector 2." << endl;

   cout << endl << "Ejercicio 2" << endl;

   int maximo = buscarValorMaximo(vec1, 10);
   cout << "El valor más grande del vector es: " << maximo << endl;

   cout << endl << "Ejercicio 3" << endl;
   int cont = obtenerCantidadApariciones(vec1, 10, maximo);
   cout << "El maximo aparece en el vector: " << cont << " veces." << endl;


    return 0;
}
