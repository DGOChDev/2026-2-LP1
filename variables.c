#include <stdio.h>
#include <string.h>

int main(){
    int a=25;
    float b=7.5;
    double avo= 6.023e23; //e23 es como decir 10^23
    char d = 'D';
    char *nombre = "UNI";

    printf("a = %d ocupa %d bytes\n", a, sizeof(a)); //int ocupa 4 bytes
    printf("b = %f ocupa %d bytes\n", b, sizeof(b)); //ocupa 4 bytes
    printf("avo = %f ocupa %d bytes\n", avo, sizeof(avo));
    printf("d = %c ocupa %d bytes\n", d, sizeof(d));
    printf("a = %d ocupa %d bytes\n", a, sizeof(a));
    printf("*nombre = %s ocupa %d y tiene %d de caracteres\n", nombre, sizeof(nombre), sizeof(*nombre)); //puntero, tamaño de la direccion, solo usa un caracter 'char'
    printf("*nombre = %s ocupa %d y tiene %d de caracteres\n", nombre, sizeof(nombre), strlen(nombre)); // ahora el contenido ocupa 3 caracteres 3 bits

    return 0;
}