#include <stdio.h>
int main(void){
    int n;
    printf("Escriba el numero de 4 cifras \n");
    scanf("%d",&n);
    while( n<1000 || n>=10000 ){
        printf("Escriba el numero que sea de 4 cifras\n");
        scanf("%d",&n);
    }
    printf("%d es el numero ingresado\n", n);
    printf("Miles: %d\n", n / 1000);
    printf("Centenas: %d\n", (n / 100) % 10);
    printf("Decenas: %d\n", (n / 10) % 10);
    printf("Unidades: %d\n", n % 10);

    return 0;
}