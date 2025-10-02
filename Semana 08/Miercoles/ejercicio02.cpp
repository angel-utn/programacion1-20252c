#include <iostream>
using namespace std;

/**
  Hacer un programa que pida la nota de 10 alumnos y muestre el promedio de notas
  Teniendo en cuenta que las notas son 1 al 10, como numeros enteros.
  
  Ademas debe mostrar cuantos son mayores al promedio
  
*/


int main(){
  int nota1, sumaNotas;
  int cantidad;
  float promedio;
  sumaNotas = 0;
  
  for(int i=1; i<=10; i++){
    cout << "Ingrese nota: ";
    cin >> nota;  
    
    sumaNotas += nota;  
  }
  
  promedio = (float)sumaNotas / 10;
  
  cout << "El promedio es: " << promedio << endl;
  
  cantidad = 0;
  for(int i=1; i<=10; i++){
    cout << "Ingrese nota: ";
    cin >> nota;  
  
    if(nota > promedio){
      cantidad ++;    
    }
  }
  
  cout << "La cantidad de notas mayores al promedio son: " << cantidad << endl;
  
  
  return 0;
}
