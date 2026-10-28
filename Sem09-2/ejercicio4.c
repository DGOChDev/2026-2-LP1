#include <stdio.h>

int main(void){
    long long numero[5] = {10, 20, 30, 40 ,50};
    char *ptr;
    ptr = (char *)numero;
    //Ya que se almacena de 8 bits el blucle recorre en char (1 bit en 1 bit) entonces cada 8 iteraciones apareceran
    //los valores del arreglo estatico numero

    for(int i=0; i<10; i++){
        printf("Valor %d, direccion %p\n", *(ptr + i), (ptr + i));
    }

    return 0;
}