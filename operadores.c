#include <stdio.h>

int main(){
    int a=25, b=7, c=129;

    printf("La suma de %d + %d es %d\n", a, b, a+b);
    printf("La resta de %d - %d es %d\n", a, b, a-b);
    printf("La multiplicacion de %d * %d es %d\n", a, b, a*b);
    printf("La division entera de %d / %d es %d\n", a, b, a/b);
    printf("La division de %d / %d es %.2f\n", a, b, (float)a/b); //El 2f me indicaba la cantidad de decimales

    printf("El resto (%%) de dividir %d entre %d es %d\n", a, b, a%b);
    /*
    Para escribir el simbolo que es usado para indicar el tipo de variable se coloca dos veces
    */
    printf("---Operadores de comparacion---\n");
    printf("a = %d\n b=%d\n c=%d\n", a, b, c);
    printf("¿%d > %d ? es %d\n", a, b, a>b); //1 me indica si es verdadero
    printf("%d > %d y %d > %d es %d\n", a, b, b, c, (a>b) && (b>c) ); // y
    printf("%d > %d o %d > %d es %d\n", a, b, b, c, (a>b) || (b>c) ); // y
    return 0;
}