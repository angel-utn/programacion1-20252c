/*
  Enunciado:
  https://docs.google.com/document/d/1ucJkU2gvslO-F57oS40405o726-xy5e5/edit?tab=t.0

  Datos de entrada
  ----------------------------
  El stock inicial de tartas
  El stock inicial de gaseosas
  Dinero inicial de la caja
  La cantidad de menúes que se venden

  Info de salida
  -----------------------------
  Total a cobrar (con descuento)
  El stock final de gaseosas
  El stock final de tartas
  Dinero final en caja

  Proceso
  -----------------------------
  Calcular el total a pagar con descuento
  Restar al stock inicial la cu vendidas
  Sumar el dinero a la caja
*/

#include <iostream>
using namespace std;

int main(){

   const int COSTO_MENU = 4500;
   int stock_gaseosas, stock_tartas, dinero_caja, cantidad_menues;
   float importe_total;

   cout << "Ingresar el stock de gaseosas: ";
   cin >> stock_gaseosas;

   cout << "Ingresar el stock de tartas: ";
   cin >> stock_tartas;

   cout << "Ingresar dinero en caja: ";
   cin >> dinero_caja;

   cout << "-------------------------------------------------" << endl;

   cout << "Ingresar la cantidad de menúes de la venta: ";
   cin >> cantidad_menues;

   cout << "-------------------------------------------------" << endl;

   //stock_tartas = stock_tartas - cantidad_menues;
   stock_tartas -= cantidad_menues;
   stock_gaseosas -= cantidad_menues;
   importe_total = (cantidad_menues * COSTO_MENU) * 0.95;
   dinero_caja += importe_total;


   cout << "El total de la venta es: $ " << importe_total << endl;
   cout << "El stock final de tartas es de: " << stock_tartas  << endl;
   cout << "El stock final de gaseosas es de: " << stock_gaseosas  << endl;
   cout << "El dinero en caja es de : $ " << dinero_caja << endl;

























	return 0;
}
