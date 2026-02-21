/*
Ejercicio 12: Escriba una función recursiva que sume los n primeros
números naturales que sean múltiplo de 3.
*/
#include <iostream>
using namespace std;

int sumaMultiplosDe3(int n){
    if(n==0){
        return 0;
    }
    else{
        return 3*(n-1) + sumaMultiplosDe3(n-1);
    }
}

int main(){
    int n;
    cout << "Ingresa n: ";
    cin >> n;
    cout << "La suma de los " << n << " primeros multiplos de 3: " << sumaMultiplosDe3(n);
}