#include <iostream>
using namespace std;

void funcion1(string &nombre, int &edad){
   nombre = "Daniela";
   edad = 30;
}

void funcion2(){
   string nombre;
   int edad;

   nombre = "Germán";
   edad = 28;
}

int main(){
   string nombre = "Angel";
   int edad = 39;

   cout << "Hola " << nombre << " tu edad es " << edad << endl;

   funcion1(nombre, edad);

   cout << "Hola " << nombre << " tu edad es " << edad << endl;

	return 0;
}
