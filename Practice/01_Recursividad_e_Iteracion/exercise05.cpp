//Ejercicio 5: Implementar los tres tipos de recursividad para calcular el
//factorial de un número dado.

#include <iostream>
using namespace std;

int factorialB(int n);
int factorialA(int n);

int factorialDirecto(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorialDirecto (n-1);
    }
}

int factorialFinal(int n, int acumulador = 1){
    if(n == 0 || n== 1){
        return acumulador;
    }
    else{
        return factorialFinal(n-1 , n*acumulador);
    }
}

int main(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero; 

    cout << "Recursion directa: " << factorialDirecto(numero) << endl;
    cout << "Recursion final: " << factorialFinal(numero) << endl;
    cout << "Recursion indirecta: " << factorialA(numero) << endl;

    return 0;
}

int factorialB(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorialA(n-1);
    }
}

int factorialA(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorialB(n-1);
    }
}