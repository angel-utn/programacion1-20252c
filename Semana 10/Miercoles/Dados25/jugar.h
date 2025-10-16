#pragma once
#include <string>
/// declaraciones de las funciones
void jugar(std::string &ganadorNombre, int &ganadorPuntos, std::string rankingNombres[], int rankingPuntos[]);
int tirarDado();
void tiradaDados(int vec[], int cant);
void mostrarTirada(int vec[], int cant);
int calcularPuntos(int dados[], int cant);
bool hay3Iguals(int dados[], int cant);
bool esSecuencial(int dados[], int cant);
bool todosPares(int dados[], int cant);
bool todosImpares(int dados[], int cant);

void actualizarRanking(std::string rankingNombres[], int rankingPuntos[], std::string nombre, int puntos);
void ordenarRanking(std::string rankingNombres[], int rankingPuntos[]);

void estadisticas(std::string ganadorNombre, int ganadorPuntos);
void mostrarRanking(std::string rankingNombres[], int rankingPuntos[]);


