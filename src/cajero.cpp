#include <iostream>
using namespace std;

int main() {
    int pin;
    int PIN = 1234; 
    float saldo = 1000; 
    int opcion;
    float retiro;
    float deposito;

    cout << "Ingrese PIN: ";
    cin >> pin;

    if (pin != PIN) {
        cout << "PIN incorrecto. Intente de nuevo: ";
        cin >> pin;

        if (pin != PIN) {
            cout << "PIN incorrecto. Ultimo intento: ";
            cin >> pin;

            if (pin != PIN) {
                cout << "Muchos intentos. Acceso bloqueado" << endl;
                return 0; 
            }
        }
   }
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Su saldo actual es: $" << saldo << endl;
    }
    else if (opcion == 2) {
        cout << "Ingrese monto a retirar: ";
        cin >> retiro;

        if (retiro > 0 && retiro <= saldo) {
            saldo = saldo - retiro;
            cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
        } else {
            cout << "monto invalido." << endl;
        }
    }
    else if (opcion == 3) {
        cout << "Ingrese monto a depositar: ";
        cin >> deposito;

        if (deposito > 0) {
            saldo = saldo + deposito;
            cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
        } else {
            cout << "monto invalido." << endl;
        }
    }
    else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
