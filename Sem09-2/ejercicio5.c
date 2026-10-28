#include <stdio.h>
int main(void) {
    int numero = 100;
    int *ptr = &numero; //Toma la direccion del numero 
    int **pptr = &ptr;  //Toma la direccion de (la direccion del puntero que apunta al numero)

    printf("numero = %d, direccion %p\n", numero, &numero);
    printf("*ptr = %d, direccion %p\n", *ptr, ptr);
    printf("**pptr = %d, direccion %p\n", **pptr, pptr);

    **pptr = 200;   //El valor dado (NO las direcciones) es lo que va a cambiar
    printf("Nuevo numero = %d\n", numero);
    return 0;
}
