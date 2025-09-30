#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   int i;

   for(i=1; i<50; i++){
      if (esPrimo(i) == true){
         cout << i << " es primo." << endl;
      }
   }

   return 0;
}
