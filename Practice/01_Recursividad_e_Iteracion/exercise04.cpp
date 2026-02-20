//Ejercicio 4: Implemente un sistema de inicio de sesión donde un usuario (con usuario y
//contraseña) solo tiene tres intentos antes de que la cuenta se bloquee temporalmente.
//(Restricción: No use variables globales). Complete el siguiente prototipo:
//bool validarCredenciales(string usuario, string contrasena);

#include <iostream>
#include <string>
using namespace std;

bool validarCredenciales(string usuario, string contrasena){
    string usuarioCorrecto = "user123";
    string contrasenaCorrecta = "hola123";
    if(usuario==usuarioCorrecto && contrasena==contrasenaCorrecta){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string usuario, contrasena;
    int intentos = 0;
    int intentos_MAX=3;
    bool accesoConcedido = false;
    do{
        cout << "Ingrese el usuario: ";
        cin >> usuario;
        cout << "Ingresa la contrasena: ";
        cin >> contrasena;

        if(validarCredenciales(usuario,contrasena)){
            accesoConcedido = true;
            break;
        }
        else{
            if(intentos == 2){
                cout << "Credenciales incorrectas" << endl;
                break;
            }
            else{
                cout << "Credenciales incorrectas, intente de nuevo" << endl;
            }
        }
        intentos++;
    }while(intentos<intentos_MAX);

    if(accesoConcedido){
        cout << "Acceso concedido " << endl;
    }
    else{
        cout << "Limite de intentos alcanzado, cuenta bloqueada " << endl;
    }

    return 0;
}