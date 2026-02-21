/* ============================================================================
 * EJERCICIO 10: "La Potencia Matemática"
 * Tema: Recursividad Directa y Casos Base Matemáticos.
 * * Descripción:
 * Implementar una función recursiva para calcular la potencia de un número 
 * entero (base elevado al exponente). 
 * Demuestra la importancia de definir correctamente el caso base absoluto 
 * (exponente == 0 retorna 1) para evitar desbordamientos de pila 
 * (Stack Overflow) en casos límite.
 * ============================================================================ */

#include <iostream>
using namespace std;

int potencia(int n, int exponente){
    if(exponente == 0){
        return 1;
    }
    else if(exponente == 1){
        return n;
    }
    else{
        return n * potencia(n, exponente-1);
    }
}

int main(){
    int base, exponente;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;
    cout << "El resultado es: " << potencia(base, exponente) << endl;
    
    return 0;
}