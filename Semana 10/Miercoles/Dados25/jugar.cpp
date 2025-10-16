#include <iomanip>
#include <iostream>
#include "jugar.h"
#include "funcionesNumericas.h"
using namespace std;

void jugar(string &ganadorNombre, int &ganadorPuntos, string rankingNombres[], int rankingPuntos[])
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

    /// actualizar el ranking
    actualizarRanking(rankingNombres, rankingPuntos, ganadorNombre, ganadorPuntos);

  }
  else if(puntosTotales[indiceCPU]>=25)
  {
    cout << "El ganador es CPU"<< endl;
    cout << "Hizo " <<   puntosTotales[indiceCPU] << " puntos" << endl;
  }
}

void actualizarRanking(string rankingNombres[], int rankingPuntos[], string nombre, int puntos)
{
  rankingNombres[10] = nombre;
  rankingPuntos[10] = puntos;

  ordenarRanking(rankingNombres, rankingPuntos);
}

void ordenarRanking(string rankingNombres[], int rankingPuntos[])
{

  for(int i=0; i<10; i++)
  {
    bool fueCambiado = false;
    for(int j=0; j<11 - i; j++)
    {
      if(rankingPuntos[j] < rankingPuntos[j+1])
      {
        int aux = rankingPuntos[j];
        rankingPuntos[j] = rankingPuntos[j+1];
        rankingPuntos[j+1] = aux;

        string auxN = rankingNombres[j];
        rankingNombres[j] = rankingNombres[j+1];
        rankingNombres[j+1] = auxN;

        fueCambiado = true;
      }
    }

    if(!fueCambiado)
    {
      break;
    }
  }
}


int calcularPuntos(int dados[], int cant)
{
  int max, min;
  int puntos;

  max = buscarValorMaximo(dados, cant);
  min = buscarValorMinimo(dados, cant);

  puntos = max - min;

  if(todosPares(dados, cant))
  {
    puntos *= 2;
  }

  if(todosImpares(dados, cant))
  {
    puntos /= 2;
  }

  if(esSecuencial(dados, cant))
  {
    puntos +=5;
  }

  if(hay3Iguals(dados, cant))
  {
    puntos += 3;
  }

  return puntos;
}

bool todosPares(int dados[], int cant)
{
  int cantidad=0;
  for(int i=0; i<cant; i++)
  {
    if(dados[i] % 2 == 0)
    {
      cantidad++;
    }
  }

  if(cantidad == cant)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool todosImpares(int dados[], int cant)
{
  int cantidad=0;
  for(int i=0; i<cant; i++)
  {
    if(dados[i] % 2 != 0)
    {
      cantidad++;
    }
  }

  if(cantidad == cant)
  {
    return true;
  }
  else
  {
    return false;
  }
}


bool esSecuencial(int dados[], int cant)
{
  /// se asegura de que todos los numeros que salen, salen una sola vez
  for(int i=1; i<=6; i++)
  {
    if(obtenerCantidadApariciones(dados, cant, i) > 1)
    {
      return false;
    }
  }

  if(obtenerCantidadApariciones(dados, cant, 1) == 1 && obtenerCantidadApariciones(dados, cant, 6) == 1)
  {
    return false;
  }

  return true;
}

bool hay3Iguals(int dados[], int cant)
{
  for(int i=0; i<cant; i++)
  {
    if(obtenerCantidadApariciones(dados, cant, dados[i]) >= 3)
    {
      return true;
    }
  }

  return false;
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

void mostrarRanking(std::string rankingNombres[], int rankingPuntos[])
{
  cout << "RANKING DE JUGADORES" << endl;
  for(int i=0; i<10; i++)
  {
    cout << "#" << setw(2) << setfill('0') <<  i+1 << " - " ;
    cout << left << setfill('-');
    if(rankingPuntos[i] > 0)
    {
      cout << setw(20) << rankingNombres[i]+" " << rankingPuntos[i] << endl;
    }
    else
    {
      cout << setw(20) <<  "SIN JUGADOR "  << " 0"<< endl;
    }
    cout << right << setfill(' ');
  }

}



