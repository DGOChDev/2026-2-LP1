#include <stdio.h>
int main(){
    int a=10;
    int *ptr; //Se define como puntero
    // Variable que opera como dirección de memoria, inicialmente apunta a algún lugar de la memoria
    // tiene un lugar de memoria
    /*
        Si se crea un puntero se requiere inicializar antes de usar
        ptr = NULL
        ptr = &a
    */
    int cantidad=200;
    ptr = NULL; //NULL es cero, significa que no se apunta a nada, no tiene memoria
    
    if(ptr == NULL ){
        ptr = &cantidad;
        printf("Puntero inicializado, su direccion es: %p y su valor es %d", ptr, *ptr);
    }
    else {
        printf("El puntero ya tiene memoria, no es necesario inicializar");
    }


    return 0;
}