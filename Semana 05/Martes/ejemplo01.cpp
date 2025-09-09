#include <iostream>
using namespace std;

int main(){

   int i;
   int limite;

   cout << "Ingresar el límite del for: ";
   cin >> limite;

   cout << endl << "Antes del for" << endl;

   for (i=1; i<=limite; i=i+2){
      cout << i << " ";
   }

   cout << endl << "Luego del for" << endl;

	return 0;
}
