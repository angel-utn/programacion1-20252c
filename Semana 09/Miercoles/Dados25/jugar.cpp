#include <iostream>
#include "jugar.h"
#include "funcionesNumericas.h"
using namespace std;

void jugar(std::string &ganadorNombre, int &ganadorPuntos)
{
  int dados[5], puntosRonda, puntosTotales[2]= {};
  string nombre;

  cout << "Ingrese nombre: ";
  cin >> nombre;

  int indiceCPU,  indiceJugador = rand() % 2; // 0 o 1

  if (indiceJugador == 0)
  {
    cout << nombre << " comienza." << endl;
    indiceCPU = 1;
  }
  else
  {
    cout << "La CPU comienza." << endl;
    indiceCPU = 0;
  }


  cout << "Comienza el juego!" << endl;
  int ronda = 0;
  do
  {
    ronda++;
    cout << "Ronda #" << ronda << endl;

    for(int i=0; i<2; i++ )
    {

      if(i == indiceJugador)
      {
        cout << "Jugada de "<<nombre<<": " << endl;
      }
      else
      {
        cout << "Jugada de la CPU" << endl;
      }

      tiradaDados(dados, 5);
      mostrarTirada(dados, 5);
      puntosRonda = calcularPuntos(dados, 5);

      puntosTotales[i]+= puntosRonda;

      cout << "Puntos de la ronda: " << puntosRonda << endl;
      cout << "Puntos totales: " << puntosTotales[i] << endl;
    }
    cout <<"----------" <<endl;
  }
  while(puntosTotales[0] < 25 && puntosTotales[1] < 25);

  if(puntosTotales[indiceJugador]>=25)
  {
    cout << "El ganador es " << nombre << endl;
    cout << "Hizo " <<   puntosTotales[indiceJugador] << " puntos" << endl;

    /// moficar las variables del main
    ganadorNombre = nombre;
    ganadorPuntos = puntosTotales[indiceJugador];
  }
  else if(puntosTotales[indiceCPU]>=25)
  {
    cout << "El ganador es CPU"<< endl;
    cout << "Hizo " <<   puntosTotales[indiceCPU] << " puntos" << endl;
  }
}

int calcularPuntos(int dados[], int cant)
{
  int max, min;

  max = buscarValorMaximo(dados, cant);
  min = buscarValorMinimo(dados, cant);

  return max - min;
}


void mostrarTirada(int vec[], int cant)
{
  cout << "Tirada: [ ";
  for(int i=0; i<cant; i++)
  {
    cout << vec[i] << " ";
  }
  cout << "]" << endl;
}



void tiradaDados(int vec[], int cant)
{
  for(int i=0; i<cant; i++)
  {
    vec[i] = tirarDado();
  }
}

int tirarDado()
{
  return rand() % 6 + 1;
}


void estadisticas(std::string ganadorNombre, int ganadorPuntos)
{
  if(ganadorPuntos > 0)
  {
    cout << "El ganador ulimo fue: " << ganadorNombre << endl;
    cout << "Con "<< ganadorPuntos << " puntos" << endl;
  }
  else
  {
    cout << "Aun no hay un ganador" << endl;
  }
}

