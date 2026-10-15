#include <stdio.h>
#include "racional.h"

int main(){
    int n1, n2, d1, d2;
    int n_res, d_res;
    printf("Ingrese el valor del numerador 1:\n");
    scanf("%d", &n1);
    do {
        printf("Ingrese el valor del denominador 1:\n");
        scanf("%d", &d1);
    }while(d1==0);
    
    printf("Ingrese el valor del numerador 2: \n");
    scanf("%d", &n2);

    do {
        printf("Ingrese el valor del denominador 2:\n");
        scanf("%d", &d2);
    }while(d2==0);

    sumar(n1, d1, n2, d2, &n_res, &d_res);
    

    printf("\n La suma de las fracciones es: %d / %d\n", n_res, d_res);

    return 0;
}