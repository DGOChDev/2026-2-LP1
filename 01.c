#include <stdio.h>
int main(){
    const float pi=3.14159;
    int num1, num2;
    float resultado;
    printf("Calculadora para dos valores\n");
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1); // & Referencia para la variable, como un puntero, interesa la dirección del contenido de memoria

    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    printf("Operaciones realizadas: \n");
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);

    resultado = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, resultado);

    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

     // Incrementos
    printf("\n--- OPERADORES ESPECIALES ---\n");

    int x = num1;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); // Muestra el postincremento

    printf("Después de x++: x = %d\n", x);
    printf("++x = %d\n", ++x); // Se muestra el preincremento
    
    return 0;
}