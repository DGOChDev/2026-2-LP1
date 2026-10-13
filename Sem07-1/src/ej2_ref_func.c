#include <stdio.h>
#include <stdlib.h>
//Gestión de matrices
#define MAX_FIL 4
#define MAX_COL 4

void init_matriz(int **matriz);
void mostrar_matriz(int **matriz);

int main(){
    int **mat1 = (int **)malloc(MAX_FIL * sizeof(int *));
    for(size_t i=0; i<MAX_FIL; i++){
        mat1[i] = (int *)malloc(MAX_COL * sizeof(int));
    }

    printf("Matriz 1: \n");
    init_matriz((int **)mat1);
    mostrar_matriz((int **)mat1);

    for(size_t i=0; i<MAX_FIL; i++){
        free(mat1[i]);
    }
    free(mat1);


    return 0;
}

//Inicializar en 0
void init_matriz(int **matriz){
    for(size_t i=0; i<MAX_FIL; i++){
        for(size_t j=0; j<MAX_COL; j++){
            matriz[i][j] = 0;
        }
    }

}

void mostrar_matriz(int **matriz){
    for(size_t i=0; i<MAX_FIL; i++){
        for(size_t j=0; j<MAX_COL; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}