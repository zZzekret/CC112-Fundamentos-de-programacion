/* ============================================================================
 * EJERCICIO 6: "El Cajero Automático"
 * Tema: Paso por Referencia y Variables Estáticas (Scope).
 * * Descripción:
 * Simular la lógica de retiro de un cajero automático. 
 * Se debe crear la función `realizarRetiro` que reciba el saldo de la cuenta 
 * (pasado por referencia para modificar el original) y el monto a retirar.
 * Además, la función debe utilizar una variable estática (`static`) para 
 * mantener un conteo histórico de cuántos retiros exitosos se han realizado 
 * durante la ejecución del programa, sin utilizar variables globales.
 * ============================================================================ */

 #include <iostream>
 using namespace std;

 void realizarRetiro(int &saldo, int retiro){
    static int intento = 1;
    if(saldo >= retiro){
        saldo -= retiro;
        cout << "Intento N° " << intento <<endl;
        intento++;
    }
    else{
        cout << "Saldo insuficiente, intente de nuevo" << endl;
    }
 }

 int main(){
    bool salida = false;
    int opcion;
    int saldo, retiro;
    do{
        cout << "MENU" << endl;
        cout << "Elige la opcion: " << endl;
        cout << "1. Saldo. " << endl;
        cout << "2. Retirar. " << endl;
        cout << "3. Mostrar saldo." << endl;
        cout << "4. Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingresa el saldo: "<<endl;
            cin >> saldo;
            break;
        case 2:
            cout << "Ingrese el monto a retirar: "<<endl;
            cin >> retiro;
            realizarRetiro(saldo, retiro);
            break;
        case 3:
            cout << "Saldo: " << saldo << endl;
            break;
        case 4:
            cout << "Saliendo..."<<endl;
            salida = true;
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo."<<endl;
            break;
        }
    }while(salida == false);

    return 0;
 }