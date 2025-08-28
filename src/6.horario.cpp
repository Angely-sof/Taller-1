#include <iostream>
using namespace std;

int main() {
    double hora, minutos;

    string nombre;
    
    cout << "ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa la hora de llegada. (ejemplo 10 20): ";
    cin >> hora >> minutos;

    if (hora < 0 || hora > 23 || minutos < 0 || minutos > 59) {
        cout << "Hora invalida" << endl;
    } else {
        
        cout << "Hora valida: " << hora << ":" << minutos << endl;
    }

    return 0;
}
