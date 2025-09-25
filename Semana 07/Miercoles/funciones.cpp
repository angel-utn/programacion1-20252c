#include <iostream>
using namespace std;
/***
/// implementacion de la funcion
TIPO_DE_RETORNO IDENTIFICADOR(PARAMETROS){
   CUERPO
}

TIPO DE RETORNO: es el tipo de dato que se obtiene como resultado de la funcion
si lo que obtengo es un entero, pongo int, si es valor de verdad uso bool
pero si no obtengo nada uso void

IDENTIFICADOR: es el nombre de la funcion

PARAMTROS: es una lista de las declaracion de las variables del cual nos permine enviar
al ser llamado.

CUERPO: es el codigo que va a ejecutar cuando sea llamado

--- llamado de la funcion
IDENTIFICADOR(ARGUMENTOS)
ARGUMENTOS: son los valores que va a tener cada uno de sus parametros
*/

/// declaracion
void holamundo();
void linea();
void saludar(string nombre);
void muestreSuma(int num1, int num2);
int pedirNumero();
int pedirNumeroPositivo();
int sumar(int n, int m);
int pedirRango(int min, int max);

/// una funcion que no retorna nada ni tampoco usa parametros
void holamundo(){
   cout << "Hola soy una funcion muy bonita! :)" << endl;
}
   
void linea(){
   cout << "****************************************" << endl;
}

/// una funcion que no retorna nada pero si usa parametros
   
void saludar(string nombre){
   cout << "Hola "<<nombre<<"!" << endl;
}
   
void muestreSuma(int num1, int num2){
   cout << num1 << " + " << num2 << " = " << sumar(num1, num2) << endl;
}

/// una funcion que retorna algo pero no tiene parametros
int pedirNumero(){
   int numero;
   cout << "Ingrese numero: ";
   cin >> numero;
   
   return numero;
}
   
int pedirNumeroPositivo(){
   int numero;
   do{
      cout << "Ingrese numero positivo: ";
      cin >> numero;
      
      if(numero <= 0){
         cout << "No es positivo... "<<endl;
      }
   }while(numero <=  0);
   
   return numero;
}

/// una funcion que retorna algo y tiene parametros
int sumar(int n, int m){
   return n + m;
}
   
/// quiero una funcion que pida un numero y valide un rango (min, max)
   
int pedirRango(int min, int max){
   int numero;
   do{
      cout << "Ingrese numero entre "<< min << " y " << max << " : ";
      cin >> numero;
      
      if(numero < min || numero > max){
         cout << "No esta dentro del rango"<<endl;
      }
   }while(numero < min || numero > max);
   
   return numero;
}
      

   
/**
   1- Por legibilidad
   2- Por reutilizacion
   3- Delegar responsabilidad (tarea)
   4- Por mantenimiento
*/

int main() {
   /// llamar o invocar
   linea();
   holamundo();
   linea();
   saludar("Brian");
   saludar("Alejandro");
   saludar("Nahuel");
   linea();
   muestreSuma(5,2);
   int k = 16;
   int j = 15;
   muestreSuma(k, j);
   
   linea();
   
   int num1, num2;
   num1 = pedirNumeroPositivo();
   num2 = pedirNumeroPositivo();
   
   muestreSuma(num1, num2);
   
   linea();
   
   int resultado = sumar(2,5);
   cout << "El resultado es: " << resultado << endl;
	linea();
   
   int numero = pedirRango(0, 10);
   
   cout << "El numero es: " << numero << endl;
	return 0;
}
