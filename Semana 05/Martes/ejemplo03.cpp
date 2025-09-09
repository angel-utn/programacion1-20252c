#include <iostream>
using namespace std;

int main(){

   int j, num, maximo;

   for(j=1; j<=5; j++){
      cout << "Ingresar un número: ";
      cin >> num;

      if ((j == 1) || (num > maximo)){
         maximo = num;
      }

   }

   cout << endl << "El valor más grande es: " << maximo << endl;


	return 0;
}
