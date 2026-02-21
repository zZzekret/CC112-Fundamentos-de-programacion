/* ============================================================================
 * EJERCICIO 9: "El Escalador de Peldaños" (Programación Dinámica Básica)
 * Tema: Estrategias de Optimización (Memoización).
 * * Descripción:
 * Estás subiendo una escalera que tiene 'N' peldaños. En cada paso, puedes 
 * subir 1 o 2 peldaños a la vez. ¿De cuántas formas distintas puedes llegar a 
 * la cima?
 * Se requiere implementar una función recursiva para resolver esto. Dado que 
 * la recursividad pura colapsará con números altos (complejidad exponencial), 
 * se debe implementar la técnica de "Memoización" (almacenar en un arreglo 
 * los peldaños ya calculados) para optimizar el tiempo de ejecución.
 * ============================================================================ */
#include <iostream>
using namespace std;

int escalarMemo(int n, int memoria[]){
    if(n<=2){
        return n;
    }
    else if(memoria[n]!=0){
        return memoria[n];
    } 
    else{
        memoria[n] = escalarMemo(n-1, memoria) + escalarMemo(n-2, memoria);
        return memoria[n];
    }
}

int main(){
    int memoria[100] = {0};
    int n;
    cout << "Ingresa el numero de peldanos: ";
    cin >> n;
    cout << "Cantidad de formas de llegar a la cima: " << escalarMemo(n, memoria) << endl;

    return 0;
}