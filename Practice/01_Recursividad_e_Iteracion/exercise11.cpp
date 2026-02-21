/*
Ejercicio 11: Escriba una función recursiva que calcula el producto
escalar de dos vectores de n elementos recursivamente.
*/

#include <iostream>
using namespace std;

double productoEscalar(double a[], double b[], int n){
    if(n == 0){
        return 0.0;
    }
    else{
        return a[n-1] * b[n-1] + productoEscalar(a, b, n-1);
    }
}

int main(){
    const int N = 5;
    double a[N] = {1,2,3,4,5};
    double b[N] = {5,4,3,2,1};

    cout << "Producto escalar: " << productoEscalar(a, b, N);

    return 0;
}