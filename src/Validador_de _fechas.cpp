#include <iostream>
#include <string>

int main() {
    int dia, año;
    std::string mes;
    
    std::cout << "ingrese el año en que nacio: ";
    std::cin >> año;

    std::cout <<"ingrese el dia en que nacio: ";
    std::cin >> dia;
    
    std::cout << "coloque el mes en que nacio: ";
    std::cin >> mes;
    
    std::string promoción;
    
    if ((mes == "enero" && dia >= 1 && dia <= 30)) {
    promoción = "invalida";
    }
    
    else if ((mes == "febrero" && dia >= 1 && dia <= 28)) {
    promoción = "valida";
    }
    else if ((mes== "febrero" && dia <28)){
    promoción = "invalida";
    }
    else if ((mes == "marzo" && dia >= 1 && dia <= 31)) {
    promoción = "invalida";
    }
    
    else if ((mes == "abril" && dia >= 1 && dia <= 30)) {
    promoción = "invalida";
    }
    
    else if ((mes == "mayo" && dia >= 1 && dia <= 31)) {
    promoción = "invalida";
    }
    
    else if ((mes == "junio" && dia >= 1 && dia <= 30)) {
    promoción = "invalida";
    }
    
    else if ((mes == "julio" && dia >= 1 && dia <= 31)) {
    promoción = "invalida";
    }
    
    if (mes == "enero" && dia >= 1 && dia <= 31) {
    promoción = "invalida";
    }
    
    else if ((mes == "septiembre" && dia >= 1 && dia <= 31)) {
    promoción = "invalida";
    }
    
    else if ((mes == "octubre" && dia >= 1 && dia <= 31)) {
    promoción = "invalida";
    }
    
    else if ((mes == "noviembre" && dia >= 1 && dia <= 30)) {
    promoción = "invalida";
    }
    
    else if ((mes == "diciembre" && dia >= 1 && dia <= 31)){
    promoción = "invalida";
    } 
    
    std::cout << "¿tienes promoción valida o invalida?: " << promoción << std::endl;
    
    return 0;
}
