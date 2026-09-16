#include <stdio.h>

unsigned int contar_unos(unsigned int n) {
    int cuenta = 0;
    while (n) {
        n &= (n - 1); // Lo que hace es borrar el bit 1 menos significativo
        cuenta++;
    }
    return cuenta;
}

int main(void){
    unsigned int n=10;
    unsigned int cantidad;
    cantidad = contar_unos(n);

    printf("Cantidad de unos del numero %u en binario: %u \n",n ,cantidad);

    return 0;
}