#include <stdio.h>

int main(void){
    long long numero[5] = {10, 20, 30, 40 ,50};
    long long *ptr = numero;
    //long long avanza de 8 bits, en cambio int avanzaba de 4 bits, long avanza de 4 bits
    //char solo 1 bit
    for(ptr = numero; ptr < numero + 5; ptr++){
        printf("Valor %d, direccion %p\n", *ptr, ptr);
    }

    return 0;
}