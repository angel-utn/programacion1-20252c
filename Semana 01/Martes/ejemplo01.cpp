/*
Hacer un programa que permita ingresar dos números enteros
por teclado. Luego calcular e informar la suma de ellos
*/
#include <iostream>
using namespace std;

int main(){
   int numero1, numero2, resultado;

   cout << "Ingresar el primer número: ";
   cin >> numero1;

   cout << "Ingresar el segundo número: ";
   cin >> numero2;

   resultado = numero1 + numero2;

   // cout << endl;
   // cout << "El resultado de la suma es: ";
   // cout << resultado;
   // cout << endl;

   cout << endl << "El resultado de la suma es --> " << resultado << endl;

   return 0;
}
