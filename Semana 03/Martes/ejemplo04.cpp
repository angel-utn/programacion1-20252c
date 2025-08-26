#include <iostream>
using namespace std;

int main()
{

    float temp;
    char dolorCabeza;
    char sueniaConCodigo;

    cout << "Ingrese la temperatura corporal en grados C: ";
    cin >> temp;

    cout << "Padece dolor de cabeza (S/N): ";
    cin >> dolorCabeza;

    cout << "Tiene sueños con programas en C++ (S/N): ";
    cin >> sueniaConCodigo;

    if ((temp > 37.5 && dolorCabeza == 'S') || sueniaConCodigo == 'S')
    {
        cout << "Posible adicción a C++";
    }
    else
    {
        cout << "No hay adicción a C++";
    }

    return 0;
}
