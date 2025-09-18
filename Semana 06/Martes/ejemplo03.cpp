/**
Se requiere realizar un programa que simule la interfaz de un cajero automático.
Las opciones son:
1 - Consultar saldo
2 - Depositar dinero
3 - Retirar dinero
----------------------
4 - Salir

El menú debe perpetuarse hasta que el usuario elija la opción salir. Al finalizar,
el programa debe mostrar el saldo final del cliente y la cantidad de movimientos
realizados en la sesión.
*/

#include <iostream>
using namespace std;
#include <cstdlib>

int main(){

   int opcion;
   float saldo = 0, importeMovimiento;
   int cantMovimientos = 0;

   do{
      system("cls"); /// Linux o Mac: system("clear");

      cout << "------ UTN BANK ------ " << endl;
      cout << "1 - Consultar saldo    " << endl;
      cout << "2 - Depositar dinero   " << endl;
      cout << "3 - Retirar dinero     " << endl;
      cout << "---------------------- " << endl;
      cout << "4 - Salir              " << endl;
      cout << endl << "Opción: ";
      cin >> opcion;

      switch (opcion){
         case 1:
            cout << "El saldo de la cuenta es: $ " << saldo << endl;
         break;
         case 2:
            cout << "Importe a depositar: $";
            cin >> importeMovimiento;
            saldo += importeMovimiento;
            cantMovimientos++;

         break;
         case 3:
            cout << "Importe a debitar: $";
            cin >> importeMovimiento;
            saldo -= importeMovimiento;
            cantMovimientos++;

         break;
         case 4:
            cout << endl << "Gracias por usar UTN Bank" << endl;
         break;
         default:
            cout << endl << "Opción incorrecta. Elija un número entre 1 y 4." << endl;
         break;
      }

      cout << endl;
      system("pause");

   }while(opcion != 4);

   cout << "****************************" << endl;
   cout << "SALDO: $ " << saldo << endl;
   cout << "MOVS :   " << cantMovimientos << endl;


	return 0;
}
