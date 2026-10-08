#include <stdio.h>

//Parametro de paso por valor
void agregar_uno(int n);

//Parametro de paso por referencia
void agregar_uno2(int *n);

int main(){
    int x=5;
    printf("---Sin usar referencia---\n");
    printf("Antes de entrar a la funcion, el valor de x es %d\n", x);
    agregar_uno(x);
    printf("Despues de entrar en la funcion, el valor de x es %d\n", x);
    printf("---Usando referencia---\n");
    printf("Antes de entrar a la funcion, el valor de x es %d\n", x);
    agregar_uno2(&x);
    printf("Despues de entrar en la funcion, el valor de x es %d\n", x);

    return 0;
}

void agregar_uno(int n){ //Se crea una copia del espacio en memoria de la variable
    n++;
    printf("Dentro de la funcion, el valor es %d\n", n);
}

void agregar_uno2(int *n){
    (*n)++; //*n es de referencia (es una direccion de memoria)
    printf("Dentro de la funcion, el valor es %d\n", *n);
}