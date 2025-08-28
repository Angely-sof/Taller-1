# Taller 1

Angely Burgos-1028486314

Santiago Pinilla-1032941461

Sara Diaz-1033101386

## Curso

Pensamiento Logaritmico- primer semestre-27/08/2025

## Guias
### Windows
Instalar GCC:

"pacman -S mingw-w64-x86_64-gcc"

Compilar:

"g++ main.cpp -o programa.exe"
### Linux

Instalar compiladores:

"sudo apt update"
"sudo apt install build-essential cmake ninja-build"


Compilar con GCC:

"g++ main.cpp -o programa"

### MacOS
Instalar herramientas de Xcode:

"xcode-select --install"


Compilar con Clang (por defecto):

"clang++ main.cpp -o programa"

### Estructura

taller/

├── README.md

├── docs/

│ ├── punto1_calculadora.pdf

│ ├── punto2_validacion_fecha.pdf

│ ├── punto3_sistema_descuentos.pdf

│ ├── punto4_cajero_automatico.pdf

│ ├── punto5_horoscopo.pdf

│ └── punto6_validacion_hora.pdf

└── src/

 ├── calculadora.cpp
 
 ├── validacion_fecha.cpp
 
 ├── sistema_descuentos.cpp
 
 ├── cajero_automatico.cpp
 
 ├── horoscopo.cpp
 
 └── validacion_hora.cpp

 ### Intrucciones de ejecución
 
 1- Tener instalado un compilador g++ como MinGW-w64 (se puede validar la versión con: g++ --version)
 
 2- Abrir la carpeta donde esta el archivo .cpp (administrador de archivos de windows)

3- en la ruta de la carpeta, escribir cmd y enter.

4- en cmd, escribir y ejecutar: 
g++ calculadora.cpp -o programa.exe
(compilar el código en un .exe llamado programa)

5- en cmd, escribir y ejecutar:
.\programa.exe
(ejecutar el programa)


