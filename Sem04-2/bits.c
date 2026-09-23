#include <stdio.h>
int main(){
    unsigned char byte = 115; // unsigned char solo 1 byte 
    unsigned int bit_valido = 0b00100000; // usnigned int de 4 bytes
    //Me dira si esta prendido o apagado 
    if((byte >> 5) & 1){
        printf("El 5to bit esta encendido\n");
    }
    else {
        printf("El 5to bit esta apagado\n");
    }

    return 0;
}