#include <iostream>
using namespace std;

int main()
{

    int edad;
    char inm;
    cout << "Ingresar edad: ";
    cin >> edad;
    cout << "Está inmunosuprimido (S/N): ";
    cin >> inm;

    if (edad > 80 || inm == 'S')
    {
        cout << "Riesgo de adicción a C++";
    }
    else
    {
        cout << "No hay riesgo de adicción a C++";
    }

    return 0;
}
