#include <iostream>
using namespace std;

/**
  Hacer un programa que pida la nota de 10 alumnos y muestre el promedio de notas
  Teniendo en cuenta que las notas son 1 al 10, como numeros enteros.
  
  Ademas debe mostrar cuantos son mayores al promedio
  
*/
void cargar(int vec[], int cant, string mensaje);
int cantidadMayorQue(int vec[], int cant, float valor);
int sumar(int vec[], int cant);
float calcularPromedio(int vec[], int cant);

/// principio de optimizacion -> primero resuelvo, luego optimizo

int main(){
  int notas[10];
  int cantidad;
  float promedio;
  
  /// cargamos las notas
  cargar(notas, 10, "Ingrese nota: ");
  
  /// calcular promedio  
  promedio = calcularPromedio(notas, 10);
  
  /// mostramos el promedio
  cout << "El promedio es: " << promedio << endl;
  
  /// cuantos son mayores al promedio
  cantidad = cantidadMayorQue(notas, 10, promedio);
  
  /// mostramos la cantidad
  cout << "La cantidad de notas mayores al promedio son: " << cantidad << endl;
  
  return 0;
}

void cargar(int vec[], int cant, string mensaje){
  for(int i=0; i<cant; i++){
    cout << mensaje;
    cin >> vec[i];  
  }
}

int sumar(int vec[], int cant){
  int suma = 0;
  
  for(int i=0; i<cant; i++){
    suma += vec[i];
  }
  
  return suma;
}

int cantidadMayorQue(int vec[], int cant, float valor){
  int cantidad = 0;
  
  for(int i=0; i<cant; i++){
    if(vec[i] > valor){
      cantidad ++;    
    }
  }
  
  return cantidad;
}


float calcularPromedio(int vec[], int cant){
  int sumaTotal;
  float promedio;
   /// sumar las notas
  sumaTotal = sumar(vec, cant);
  
  /// calcular promedio  
  promedio = (float)sumaTotal / cant;
  
  return promedio;
}

