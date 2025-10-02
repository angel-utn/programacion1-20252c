#include <iostream>
using namespace std;

/**
  Hacer una funcion que dado un numero devuelva el valor absoluto del numero
*/
/*
  5 => 5
10 => 10
-5 => 5

- * - => +

-5 * -1 => 5
*/

/// Declaracion de las funciones
float absoluto(float numero);
float elevado(float base, int exponente);

int main(){
    float numero;
    
    numero = absoluto(5);
    
    cout << numero << endl;
    
    numero = absoluto(-10);
    
    cout << numero << endl;
    
    numero = elevado(2, 3);
    
    cout << numero << endl;
    
    return 0;
}

/// definicion de la funcion
float absoluto(float numero){
  if(numero>=0){
    return numero;  
  }
  else{
    return numero * -1;  
  }
}

float elevado(float base, int exponente){
  float resultado = 1;
  
  for(int i=1; i<=exponente; i++){
    resultado *= base;  
  }
  
  return resultado;
}
