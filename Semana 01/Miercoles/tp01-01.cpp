#include <iostream>
using namespace std;

/**
  Hacer un programa para ingresar por teclado la cantidad de horas trabajadas 
  por un operario y el valor que se le paga por hora trabajada y 
  listar por pantalla el sueldo que le corresponda.
  
  
  Metodologia de Resolucion de problemas
  
  - Identidicar el Problema
    ingresar cantidad horas y valor hora sueldo.
    
  - Analizar el problema (datos)
    - Datos de entrada 
      datos imporatenes que require para la solucion pero que no conocemos 
      ni tampoco sabesmos calulcularlo
      
    - Datos de salida
      datos importantes por el cual existe este programa (objetivo)
    
    - Operaciones
      Opeaciones que hacen que nuestros datos entrada se transformen 
      en los datos de salida
      
      // operadores arimeticos
      + - * / %
      
      DE:
        cantidad_horas  1
        valor_hora      2
      DS:
        sueldo    4
      OP:
        sueldo = cantidad_horas * valor_hora  3
  
  - Establecemos la Estrategia
    pedir la cantidad y el valor horas -- Ok
    calcular el sueldo 
    mostrar el sueldo
      
  - Dise¤amos el Algorimo (diagrama o pseudocodigo)
  
  - Codificar (C++)
  
  - Ejeuctar, Probar, depurar
  
  - Documentacion
    
*/


int main(){
    int cantidad_horas;
    float valor_hora, sueldo;
   
    /// Datos de ingreso
    /// pedir la cantidad y el valor horas
    cout << "Ingrese cantidad de horas: ";
    cin >> cantidad_horas;
    
    cout << "Ingrese valor de la hora: ";
    cin >> valor_hora;
    
    /// Proceso
    /// calcular el sueldo 
    sueldo = cantidad_horas * valor_hora;
    
     /// Datos de salida
    /// mostrar el sueldo 
    cout << "Sueldo: $" << sueldo << endl; 
    
    return 0;
}




