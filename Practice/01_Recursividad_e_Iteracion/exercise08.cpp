/* ============================================================================
 * EJERCICIO 8: "El Máximo Común Divisor (MCD)"
 * Tema: Recursividad Final (Tail Recursion).
 * * Descripción:
 * Implementar el Algoritmo de Euclides para encontrar el Máximo Común Divisor 
 * de dos números enteros. La implementación debe utilizar estrictamente 
 * Recursividad Final (Tail Recursion), asegurando que la llamada recursiva 
 * sea la última instrucción ejecutada, permitiendo al compilador optimizar 
 * el uso de la memoria Stack.
 * ============================================================================ */
#include <iostream>
using namespace std;

int calcularMCD(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return calcularMCD(b, a%b);
    }
}

int main(){
    int a, b;
    cout << "Ingresa 2 numeros: ";
    cin >> a >> b;

    cout << "El MCD es: " << calcularMCD(a, b);

    return 0;
}