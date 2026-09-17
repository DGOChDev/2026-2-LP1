#include <stdio.h>
int main(void){
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // forma de determinar el maximo
    printf("max = %d\n", max);

    // Ternario anidado

    int nota = 75;
    const char *puntero = (nota >= 90) ? "A" : 
    (nota >= 80) ? "B" :
    (nota >= 70) ? "C" : "D";
    printf("Categoria: %s\n", puntero);
    
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(a) = %zu\n", sizeof(a));
    printf("sizeof(a + 1.0)= %zu\n", sizeof(a + 1.0));
    printf("sizeof(int[10])= %zu\n", sizeof(int[10]));
    
    int arr[] = {2, 4, 8, 16, 32, 64, 128, 256};
    printf("Elementos del arreglo: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}