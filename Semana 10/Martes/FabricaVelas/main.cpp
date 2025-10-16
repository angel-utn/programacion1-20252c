#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
    cout << "Bienvenidos a VelApp" << endl;
    cout << "---------------------------------" << endl;

    // Declaración de variables
    int nroPedido, dia, tipoVela, cantidad;
    float kilosCera, kilosPedido;
    char decision;

    // B
    int pedidosPorDia[7] = {};

    // C
    int cantidadPorDia[7] = {};

    // D
    float consumoTipoVela[3] = {};

    string nombresTipoVela[3] = {"Pequeña", "Mediana", "Grande"};
    float ceraPorTipoVela[3] = {0.5, 0.8, 1.2};

    cout << "Ingresar los kilos de cera al iniciar la semana: ";
    cin >> kilosCera;

   // Configurar tipos de vela
    configurarConsumoTiposVela(nombresTipoVela, ceraPorTipoVela);


    cout << endl << "Procesamiento de pedidos (ingresar nro de pedido negativo para finalizar carga): " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Número de pedido: ";
    cin >> nroPedido;

    while (nroPedido >= 1){
      cout << "Día: ";
      cin >> dia;
      cout << "Tipo de vela (1 a 3): ";
      cin >> tipoVela;
      cout << "Cantidad: ";
      cin >> cantidad;

      // A
      kilosPedido = cantidad * ceraPorTipoVela[tipoVela - 1];
      kilosCera -= kilosPedido;

      // B
      pedidosPorDia[dia-1]++;

      // C
      cantidadPorDia[dia-1] += cantidad;

      // D
      // Determinar el consumo de kgs de cera del pedido y sumarlo al vector consumoPorTipoVela

      cout << "-----------------------" << endl;

      cout << "Número de pedido: ";
      cin >> nroPedido;
    }

    cout << "A) Kilos restantes al finalizar la semana: " << kilosCera << endl;
    mostrarPuntoB(pedidosPorDia);
    mostrarPuntoC(cantidadPorDia);
    mostrarPuntoD(nombresTipoVela, consumoTipoVela);

    return 0;
}
