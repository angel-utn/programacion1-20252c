#include <iostream>
using namespace std;

/// Declaraciones
void intercambiar(int &a, int &b);
void mostrarValores(int a, int b);

int main(){

   int n1 = 50, n2 = 200;

   cout << "(" << n1 << "; " << n2 << ")" << endl;

   intercambiar(n1, n2);

   cout << "(" << n1 << "; " << n2 << ")" << endl;

	return 0;
}

/// Definiciones
void intercambiar(int &a, int &b){
   int auxiliar;
   auxiliar = a;
   a = b;
   b = auxiliar;
}

void mostrarValores(int a, int b){
   cout << "(" << a << "; " << b << ")" << endl;
}
