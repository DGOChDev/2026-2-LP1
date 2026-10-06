#include <stdio.h>
#define FILAS 5
#define COLUMNAS 4

int main(){
    //Arreglo bidimensional
    double matriz[FILAS][COLUMNAS];

    //Se inicializara los elementos con cero
    for(size_t i=0; i<FILAS; i++){
        for(size_t j=0; j<COLUMNAS; j++){
            matriz[i][j]=0.0;
        }
    }

    for(size_t i=0; i<FILAS; i++){
        for(size_t j=0; j<COLUMNAS; j++){
            printf(" \t%lf ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}