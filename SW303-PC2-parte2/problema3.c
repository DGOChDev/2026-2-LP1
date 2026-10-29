#include <stdio.h>
#include <stdlib.h>
int minimo(const int *v, int n, int *salida);
int maximo(const int *v, int n, int *salida);
long long suma(const int *v, int n);
int promedio(const int *v, int n, double *salida);


int main(void){
    int n;
    do {
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);
    }while(n<=0 || n>1000);

    int *arreglo;
    arreglo = (int *)calloc(n, sizeof(int));
    if(arreglo = NULL){
        return 1;
    }
    //Colocando los valores de cada elemento del arreglo
    int *exit;
    double *exit_double;
    printf("Ingrese %d enteros: \n", n);
    for(int i=0; i<n; i++){
        int valor;
        scanf("%d\n", &valor);
        arreglo[i] = valor;
    }
    int valor1;
    printf("Salida:  \n");
    printf("n = %d\nArreglo: ", n);
    for(int i=0; i<n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    valor1 = minimo(arreglo, n, exit);
    printf("Minimo     : %d \n", *exit);

    valor1 = maximo(arreglo, n, exit);
    printf("Maximo     : %d \n", *exit);

    long long sum = suma(arreglo, n);
    printf("Suma       : %d \n", sum);
    

    valor1 = promedio(arreglo, n, exit_double);
    printf("Promedio   : %2.f \n", *exit_double);

    //Liberar memoria
    free(arreglo);


    return 0;
}

int minimo(const int *v, int n, int *salida){
    if(v == NULL || n<=0 || salida==NULL){
        return 0;
    }
    int min;
    for(int i=0; i<n; i++){
        if(i == 0){
            min=v[i];
        }
        if(v[i] < min){
            min = v[i];
        }
    }
    *salida = min;
    return 1;
}

int maximo(const int *v, int n, int *salida){
    if(v == NULL || n<=0 || salida==NULL){
        return 0;
    }
    int max;
    for(int i=0; i<n; i++){
        if(i == 0){
            max=v[i];
        }
        if(v[i] > max){
            max = v[i];
        }
    }
    *salida = max;
    return 1;
}

long long suma(const int *v, int n){
    if(v == NULL || n<=0){
        return 0;
    }

    long long s=0; //variable local
    for(int i=0; i<n; i++){
        s += (long long)v[i];
    }
    return s; 

}

int promedio(const int *v, int n, double *salida){
    if(n == 0){
        return 0;
    }
    double prom = 0;
    for(int i=0; i<n; i++){
        prom += v[i];
    }
    prom = (double)prom/n;
    *salida = prom; 
    return 1;
}