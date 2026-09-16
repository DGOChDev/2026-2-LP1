#include <stdio.h>
int main(void){
    int i = 5, j;
    j = i++; // j=5
    printf("j = i++ -> i=%d, j=%d\n", i, j); // i=6, j=5
    i = 5;
    j = ++i; printf("j = ++i -> i=%d, j=%d\n", i, j); // i=6, j=6

    // Trampa clasica: comportamiento no especificado
    i = 5;
//    int k = i++ + i++; // El orden de evaluacion no esta definido
    int k=i++;
    k = k + (i++);
    printf("i++ + i++ = %d (Comportamiento no especificado)\n", k);

    return 0;
}