#include <stdio.h>
int main(void){
    int a=7, b=2;
    printf("%d / %d = %d (division entera) \n", a,b, a/b);
    printf("%d %% %d = %d (modulo) \n", a,b, a%b);
    printf("%d / 2.00 = %.2f (double) \n", a, a/2.00);
//    printf("7/2 = %.2f (float) \n", (float)a/b);
    printf("(float)7/2 = %.2f\n", (float)a/b);

    printf("-7 %% 2 = %d\n", -7 % 2);
    printf(" 7 %% -2 = %d\n", 7 % -2);
    // Asignacion compuesta
    int x = 10;
    printf("x = %d\n", x);
    x += 5; printf("x += 5 -> %d\n", x); // x = x+5
    x -= 3; printf("x -= 3 -> %d\n", x); // x= x-3
    x *= 2; printf("x *= 2 -> %d\n", x); // x= x*2 
    x /= 4; printf("x /= 4 -> %d\n", x); // x= x/4 
    x %= 4; printf("x %%= 4 -> %d\n", x); // x = x%4

    return 0;
}

// 7 / 2  da 3 y no 3.5 por hacer una division entre enteros mientras que en python hace la division en punto flotante
// -7 % 2 = -1 da un valor negativo
// x es un entero al hacer una division entera su resultado tambien tendra un resultado entero