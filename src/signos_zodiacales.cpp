#include <iostream>
#include <string>

int main() {
    int dia;
    std::string mes;
    
    std::cout <<"ingrese el dia en que nacio: ";
    std::cin >> dia;
    
    std::cout << "coloque el mes en que nacio: ";
    std::cin >> mes;
    
    std::string signo;
    
    if ((mes == "marzo" && dia >= 21) || (mes == "abril" && dia <= 19)) {
    signo = "Aries";
    }
    
    else if ((mes == "abril" && dia >= 20) || (mes == "mayo" && dia <= 20)) {
    signo = "Tauro";
    }
    
    else if ((mes == "mayo" && dia >= 21) || (mes == "junio" && dia <= 20)) {
    signo = "Géminis";
    }
    
    else if ((mes == "junio" && dia >= 21) || (mes == "julio" && dia <= 22)) {
    signo = "Cáncer";
    }
    
    else if ((mes == "julio" && dia >= 23) || (mes == "agosto" && dia <= 22)) {
    signo = "Leo";
    }
    
    else if ((mes == "agosto" && dia >= 23) || (mes == "septiembre" && dia <= 22)) {
    signo = "Virgo";
    }
    
    else if ((mes == "septiembre" && dia >= 23) || (mes == "octubre" && dia <= 22)) {
    signo = "Libra";
    }
    
    else  if ((mes == "octubre" && dia >= 23) || (mes == "noviembre" && dia <= 21)) {
    signo = "Escorpio";
    }
    
    else if ((mes == "noviembre" && dia >= 22) || (mes == "diciembre" && dia <= 21)) {
    signo = "Sagitario";
    }
    
    else if ((mes == "diciembre" && dia >= 22) || (mes == "enero" && dia <= 19)) {
    signo = "Capricornio";
    }
    
    else if ((mes == "enero" && dia >= 20) || (mes == "febrero" && dia <= 18)) {
    signo = "Acuario";
    }
    
    else if ((mes == "febrero" && dia >= 19) || (mes == "marzo" && dia <= 20)) {
    signo = "Piscis";
    } else {
        signo = "fecha invalida";
    }
    
    std::cout << "Tu signo zodiacal es: " << signo << std::endl;
    
    return 0;
}
