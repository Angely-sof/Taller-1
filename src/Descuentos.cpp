#include <iostream>
#include <string> 

int main() {
    std::string tipo_de_cliente;  

    std::cout << "¿Es cliente VIP o regular? ";
    std::cin >> tipo_de_cliente;


    if (tipo_de_cliente == "VIP" || tipo_de_cliente == "vip") {
        std::cout << "Tan de buenas tienes descuento: 20%" << std::endl;
    } 
    else if (tipo_de_cliente == "regular" || tipo_de_cliente == "REGULAR") {
        int productos_comprados;
        std::cout << "Número de productos comprados: ";
        std::cin >> productos_comprados;

        if (productos_comprados >= 4) {
            std::cout << "Felicidades tienes descuento: 10%" << std::endl;
        } else {
            std::cout << "jajaja no hay descuento" << std::endl;
        }
    } 
    else {
        std::cout << "Tipo de cliente no reconocido." << std::endl;
    }

    return 0;
}
