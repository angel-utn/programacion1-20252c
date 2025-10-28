#include <iostream>
using namespace std;
#include <Windows.h>

void mostrarVector(int vec[], int tam){

   for(int i = 0; i < tam; i++){
      cout << vec[i] << " ";
   }

}

void ordenarVectorBurbuja(int vec[], int tam){
   for(int i = 0; i < tam - 1; i++){

         for(int j = 0; j < tam - 1 - i; j++){

            if (vec[j] < vec[j+1]){
               int aux = vec[j];
               vec[j] = vec[j+1];
               vec[j+1] = aux;
               //Sleep(500);
            }
         }

         cout << "Pasada " << i+1 << ": ";
         mostrarVector(vec, tam);
         cout << endl;
      }
}

int main(){
   const int TAM = 5;
   int vec[TAM] = {5,150,300,10,6};

   cout << "Vector original: ";
   mostrarVector(vec, TAM);
   cout << endl;

   ordenarVectorBurbuja(vec, TAM);

   cout << endl << "Vector ordenado: ";
   mostrarVector(vec, TAM);
   cout << endl;



	return 0;
}
