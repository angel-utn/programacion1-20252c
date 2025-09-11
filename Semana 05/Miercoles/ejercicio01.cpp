#include <iostream>
using namespace std;

/***
  while(expresion_logica){
    /// cosas que quieres que se repitan      
  }
  
  do{
    /// cosas que quieres que se repitan     
  }while(expresion_logica);
*/

/***
  dado una lista de numeros que finalizar con el 3er numero par, 
  mostrar el promedio de todos los numeros ingresados.
  
  
  
*/

int main(){
    int numero, cantidadPares;
    int cantidadNumeros, sumaNumeros;
    
    cantidadPares = 0;
    cantidadNumeros = sumaNumeros = 0;
    
    do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// proceso
      cantidadNumeros++;
      sumaNumeros+=numero;
      
      if(numero % 2 == 0){
        cantidadPares++;    
      }
      
    }while( cantidadPares < 3);
    
    cout << "El promedio de numeros son: " << ((float)sumaNumeros/cantidadNumeros) << endl;
  
    return 0;
}
