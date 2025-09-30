#include <iostream>
using namespace std;

/// Declaración
int calcularMaximo(int n1, int n2, int n3);

int main(){

   int a, b, c, mayor;

   cout << "Ingresar tres números: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   mayor = calcularMaximo(a, b, c);

   cout << "El máximo es: " << mayor << endl;

	return 0;
}

/// Definición
int calcularMaximo(int n1, int n2, int n3){
   int maximo = n1;

   if (n2 > maximo){
      maximo = n2;
   }
   if (n3 > maximo){
      maximo = n3;
   }

   return maximo;
}
