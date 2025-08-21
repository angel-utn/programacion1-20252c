#include <iostream>
using namespace std;
/// hacer un progama que pida un numero 
/// y muestre si dicho numero es par

int main() {
   int n;
   cout << "Ingrese numero: ";
   cin >> n;
   
   if(n % 2 == 0){
      cout << "El numero es par!"<<endl;
   }
   else{
      cout << "El numero es impar!" << endl;
   }
	
	return 0;
}

