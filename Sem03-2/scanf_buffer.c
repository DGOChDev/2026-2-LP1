#include <stdio.h>
int main(){
    
    int n;
    char cadena[50];
    printf("Numero: ");
    scanf("%d", &n);
    printf("Cadena: ");
    scanf("%s", cadena); // Problema con el salto de linea '\n' porque %s lo ignora
    printf("n=%d, cadena=%s\n", n, cadena);

    return 0;
}