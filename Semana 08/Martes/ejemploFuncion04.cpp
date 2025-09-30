#include <iostream>
using namespace std;

/// Declaraciones
int duplicarPorValor(int nro);
void duplicarPorReferencia(int &nroADuplicar);

int main(){

   int nro, duplicado;
   cin >> nro;

   duplicado = duplicarPorValor(nro);

   duplicarPorReferencia(nro);

   cout << "El número duplicado (utilizando parámetro por valor) es : " << duplicado << endl;
   cout << "El número duplicado (utilizando parámetro por referencia) es : " << nro << endl;

	return 0;
}

/// Definiciones
int duplicarPorValor(int nro){
   int valorDuplicado = nro * 2;
   return valorDuplicado;
}

void duplicarPorReferencia(int &nroADuplicar){
   nroADuplicar = nroADuplicar * 2;
}
