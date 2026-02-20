//Ejercicio 2: Completar la implementación e imprimir
//el valor de x antes de llamar a la función, en la función y
//después de llamar a la función.

#include <iostream>
using namespace std;

void incrementaX( int x){
    x += 10;
    cout << "2. Valor de x en la funcion: " << x << endl;
}

int main(){
    int x = 10;
    cout << "1. Valor de x ANTES de la funcion: " << x << endl;

    incrementaX(x);

    cout << "3. Valor de x DESPUES de la funcion: " << x << endl;

    return 0;
}