#include <iostream>
using namespace std;

int main() {
	const int PIN = 1234;
	int pin;
	float saldo = 1000;
	int opcion;
	float retiro, deposito;

	cout << "Ingrese PIN: ";
	cin >> pin;

	if (pin == PIN) {
		cout << "Acceso concedido.\n";
	} else {
		cout << "PIN incorrecto.\n";
		cout << "Ingrese PIN: ";
		cin >> pin;

		if (pin == PIN) {
			cout << "Acceso concedido.\n";
		} else {
			cout << "PIN incorrecto.\n";
			cout << "Ingrese PIN: ";
			cin >> pin;

			if (pin == PIN) {
				cout << "Acceso concedido.\n";
			} else {
				cout << "bloqueado muchos intentos.\n";
				return 0;
			}
		}
	}

	cout << "1. Consultar saldo\n";
	cout << "2. Retirar dinero\n";
	cout << "3. Depositar dinero\n";
	cout << "Opcion: ";
	cin >> opcion;

	switch (opcion) {
	case 1:
		cout << "Saldo actual:" << saldo << endl;
		break;

	case 2:
		cout << "Monto a retirar: ";
		cin >> retiro;
		if (retiro > 0 && retiro <= saldo) {
			saldo -= retiro;
			cout << "Retiro exitoso. Nuevo saldo: " <<saldo << endl;
		} else {
			cout << " monto invalido.\n";
		}
		break;

	case 3:
		cout << "Monto a depositar: ";
		cin >> deposito;
		if (deposito > 0) {
			saldo += deposito;
			cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
		} else {
			cout << "Error: monto invalido.\n";
		}
		break;

	}
	return 0;
}
