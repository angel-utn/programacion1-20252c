#include <iostream>
using namespace std;

/**
  Hacer un programa que pida la nota de 10 alumnos y muestre el promedio de notas
  Teniendo en cuenta que las notas son 1 al 10, como numeros enteros.
  
  Ademas debe mostrar cuantos son mayores al promedio
  
*/
void cargarNotas(int notas[]){
  for(int i=0; i<10; i++){
    cout << "Ingrese nota: ";
    cin >> notas[i];  
  }
}

int sumarNotas(int notas[]){
  int sumaNotas = 0;
  
  for(int i=0; i<10; i++){
    sumaNotas += notas[i];
  }
  
  return sumaNotas;
}

int mayoresPromedio(int notas[], float promedio){
  int cantidad = 0;
  
  for(int i=0; i<10; i++){
    if(notas[i] > promedio){
      cantidad ++;    
    }
  }
  
  return cantidad;
}

int main(){
  int notas[10], sumaNotas;
  int cantidad;
  float promedio;
  
  /// cargamos las notas
  cargarNotas(notas);
  
  /// sumar las notas
  sumaNotas = sumarNotas(notas);
  
  /// calcular promedio  
  promedio = (float)sumaNotas / 10;
  
  /// mostramos el promedio
  cout << "El promedio es: " << promedio << endl;
  
  /// cuantos son mayores al promedio
  cantidad = mayoresPromedio(notas, promedio);
  
  /// mostramos la cantidad
  cout << "La cantidad de notas mayores al promedio son: " << cantidad << endl;
  
  
  return 0;
}
