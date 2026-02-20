//Ejercicio 3: Complete la implementación de las funciones:
//imprimirArreglo,
//imprimirMatriz.

#include <iostream>
using namespace std;

void imprimirArreglo(int arreglo[], int tamano){
    cout << "Arreglo: " << endl;
    for(int i=0; i<tamano; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

void imprimirMatriz(int matriz[][5], int filas, int columnas){
    cout << "Matriz: " << endl;
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    int tamano_arreglo = 5;
    int matriz[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    int filas = 2;
    int columnas = 5;

    imprimirArreglo(arreglo, tamano_arreglo);

    imprimirMatriz(matriz, filas, columnas);

    return 0;
}