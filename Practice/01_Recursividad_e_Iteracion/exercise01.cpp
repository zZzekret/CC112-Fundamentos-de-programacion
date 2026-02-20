//Ejercicio 1: Implementar la función modificaArray que recibe como parámetro un arreglo de enteros y 
//duplique el valor de sus elementos.

#include <iostream>
using namespace std;

void modificaArray(int arreglo[], int tamano){
    for(int i=0; i<tamano; i++){
        arreglo[i] = arreglo[i]*2;
    }
}

int main(){
    int numeros[5] = {1, 2, 3, 4, 5};
    int tamano = 5;
    modificaArray(numeros, tamano);
    cout << "Arreglo duplicado: ";
    for(int i=0; i<tamano; i++){
        cout << numeros[i] << " ";
    }

    return 0;
}