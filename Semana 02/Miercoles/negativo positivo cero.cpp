#include <iostream>
using namespace std;



int main(){
   int n;
   
   cout << "Ingrese numero: ";
   cin >> n;
   
   if(n > 0){
      /// es verdadero
      cout << "Es positivo!" << endl;
   }
   else{
      /// es falso
      if(n == 0){
         cout << "Es cero" << endl;
      }
      else{
         cout << "Es negativo" << endl;
      }
   }
   
	
	return 0;
}

