/* ============================================================================
 * EJERCICIO 7: "El Analizador de Dígitos"
 * Tema: Recursividad Directa vs Iteración.
 * * Descripción:
 * Crear dos funciones que calculen la suma de los dígitos de un número entero 
 * positivo (ej. 123 -> 1+2+3 = 6). 
 * 1. `sumaDigitosIterativa(int n)`: Usando un bucle while.
 * 2. `sumaDigitosRecursiva(int n)`: Usando recursividad directa, identificando
 * claramente el caso base (n < 10) y el caso recursivo.
 * El objetivo es comparar la lógica de ambas aproximaciones.
 * ============================================================================ */

#include <iostream>
using namespace std;

int sumaDigitosIterativa(int n){
    int suma = 0;
    while(n>0){
        suma += n%10;
        n /= 10;
    }
    return suma;
}

int sumaDigitosRecursiva(int n){
    if(n<10){
        return n;
    }
    else{
        return n%10 + sumaDigitosRecursiva(n/10);
    }
}

int main(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Suma iterativa: " << sumaDigitosIterativa(numero) << endl;
    cout << "Suma recursiva: " << sumaDigitosRecursiva(numero) << endl;
}
