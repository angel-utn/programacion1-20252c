#include <iostream>
#include <ctime>
#include "jugar.h"

using namespace std;

int main()
{
  srand(time(0));
  string ganadorNombre;
  int ganadorPuntos=0;
  
  int opcion;
  do
  {
    system("cls");
    cout << "---- MENU ----" << endl;
    cout << "1- Jugar (vs CPU)"<<endl;
    cout << "2- Estad¡sticas (Historial)"<<endl;
    cout << "0- Salir"<<endl;
    cout << "Opcion: ";
    cin >> opcion;

    system("cls");

    switch(opcion)
    {
    case 1:
      jugar(ganadorNombre, ganadorPuntos);
      break;
    case 2:
      estadisticas(ganadorNombre, ganadorPuntos);
      break;
    case 0:
      cout << "Gracias por jugar :)" << endl;
      break;
    default:
      cout << "Opcion incorrecta..." <<endl;
    }
    system("pause");
  }
  while (opcion != 0);

  return 0;
}
