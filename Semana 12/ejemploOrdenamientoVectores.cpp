#include <iostream>
using namespace std;
#include <Windows.h>

void mostrarVector(int vec[], int tam){

   for(int i = 0; i < tam; i++){
      cout << vec[i] << " ";
   }

}

int main(){
   const int TAM = 5;
   int vec[TAM] = {5,150,300,10,6};

   cout << "Vector original: ";
   mostrarVector(vec, TAM);
   cout << endl;

   for (int i = 0; i < TAM - 1; i++){
     int posmaximo = i;

     for(int j = i + 1; j < TAM; j++){
         if (vec[j] > vec[posmaximo]){
            posmaximo = j;
         }
     }

     if (posmaximo != i){
        int aux = vec[i];
        vec[i] = vec[posmaximo];
        vec[posmaximo] = aux;
        //Sleep(500);
     }

     cout << "Pasada " << i+1 << ": ";
     mostrarVector(vec, TAM);
     cout << endl;
   }

   cout << endl << "Vector ordenado: ";
   mostrarVector(vec, TAM);



	return 0;
}
