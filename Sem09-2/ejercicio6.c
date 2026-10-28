#include <stdio.h>
int main(void) {
    int matriz[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int (*ptr)[3] = matriz; // es arreglo de 3 punteros, apuntando a matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j)); // *( *(fila) + columna )
        }
        printf("\n");
    }
    return 0;
}