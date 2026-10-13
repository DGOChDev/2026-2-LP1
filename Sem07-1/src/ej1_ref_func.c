#include <stdio.h>
//Gestión de matrices
#define MAX_FIL 4
#define MAX_COL 4

void init_matriz(int matriz[MAX_FIL][MAX_COL]);
void mostrar_matriz(int matriz[MAX_FIL][MAX_COL]);

int main(){
    int mat1[MAX_FIL][MAX_COL];
    int mat2[MAX_FIL][MAX_COL] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    printf("Matriz 1: \n");
    init_matriz(mat1);
    mostrar_matriz(mat1);

    printf("Matriz 2 antes: \n");
    mostrar_matriz(mat2);
    printf("Matriz 2 despues: \n");
    init_matriz(mat2);
    mostrar_matriz(mat2);

    return 0;
}

//Inicializar en 0
void init_matriz(int matriz[MAX_FIL][MAX_COL]){
    for(size_t i=0; i<MAX_FIL; i++){
        for(size_t j=0; j<MAX_COL; j++){
            matriz[i][j] = 0;
        }
    }

}

void mostrar_matriz(int matriz[MAX_FIL][MAX_COL]){
    for(size_t i=0; i<MAX_FIL; i++){
        for(size_t j=0; j<MAX_COL; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}