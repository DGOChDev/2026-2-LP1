#include <stdio.h>
int main() {
    //uso de fprint
    fprintf(stdout, "Mensaje normal por stdout\n");
    fprintf(stderr, "Mensaje de error por stderr\n");
    //Lo que hace es redirigir desde la terminal
    //prog.exe > salida.txt > error.txt

    return 0;
}