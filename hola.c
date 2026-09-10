
// Compilar para usar la Ñ
// gcc hola.c -o hola.exe -fexec-charset=cp850
// gcc -finput-charset=UTF-8 -fexec-charset=UTF-8 hola.c -o hola.exe
#include <stdio.h>

int main(){
    int edad = 20;
    float altura = 1.63;
    char inicial = 'D';
    int num=200;

    printf("Hola mundo para C \n");
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Inicial registrada: %c\n", inicial);

    return 0;
}
