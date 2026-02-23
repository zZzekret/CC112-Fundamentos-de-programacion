/*
 * EJERCICIO: Las Torres de Hanoi
 * * OBJETIVO: 
 * Mover una pila de 'n' discos desde un asta inicial (origen) hasta un asta 
 * final (destino), utilizando un asta auxiliar (temporal).
 *
 * REGLAS:
 * 1. Solo se puede mover un disco a la vez.
 * 2. Ningún disco puede colocarse sobre un disco de menor tamaño.
 *
 * LÓGICA RECURSIVA:
 * Para mover 'n' discos, dividimos el problema en 3 pasos:
 * Paso A: Mover los 'n-1' discos superiores del origen al asta temporal, 
 * usando el destino como apoyo.
 * Paso B: Mover el disco base (el más grande) directamente del origen al destino.
 * Paso C: Mover los 'n-1' discos desde el asta temporal hacia el destino, 
 * usando el origen original como apoyo.
 *
 * CASO BASE: 
 * Cuando n == 1, simplemente movemos el disco del origen al destino.
 */
#include <iostream>
using namespace std;

void torreDeHanoi(int n, int origen, int destino, int temporal){
    if(n==1){
        cout << origen << "->" << destino << endl;
        return;
    }
    torreDeHanoi(n-1, origen, temporal, destino);
    
    cout << origen << "->" << destino << endl;
    
    torreDeHanoi(n-1, temporal, destino, origen);
}

int main(){
    int n;
    int origen = 1;
    int destino = 3;
    int temporal = 2;
    cout << "Ingresa n: ";
    cin >> n;
    torreDeHanoi(n, origen, destino, temporal);
}