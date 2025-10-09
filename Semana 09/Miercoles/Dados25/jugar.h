#pragma once
#include <string>
/// declaraciones de las funciones
void jugar(std::string &ganadorNombre, int &ganadorPuntos);
int tirarDado();
void tiradaDados(int vec[], int cant);
void mostrarTirada(int vec[], int cant);
int calcularPuntos(int dados[], int cant);

void estadisticas(std::string ganadorNombre, int ganadorPuntos);

