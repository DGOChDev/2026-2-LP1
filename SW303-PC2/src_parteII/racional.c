#include <stdio.h>
#include "racional.h"

static int es_primo(int n){
    if(n<=1){ //Caso del 1 o menores
        return 0;
    }
    for(size_t i=2; i<n; i++){ //Para determinar si no es primo en su rango de valores 
        if( (n%i)==0 ){
            return 0; 
        }
    }
    return 1; //Paso por el for y no encontro valores que coincidan entonces es primo
}

int mcd(int a, int b){
    if(b==0){
        if(a<0){
            return -a;
        }
        else {
            return a;
        }
    }
    return (b, (a%b));
}

void simplificar(int *num, int *den){
    if(*den == 0){ //No es posible que el denominador sea 0
        return;
    }
    int valor_comun= mcd(*num, *den); //usamos la función definida anteriormente para hallar el mcd y saber hasta cuanto se debe dividir
    if (valor_comun > 1) {
        *num /= valor_comun;
        *den /= valor_comun;
    }
    if (*den < 0) { //El denominador sea positivo
        *num = -(*num);
        *den = -(*den);
    }
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res){
    *n_res = (n1*d2) + (n2*d1); 
    *d_res = (d1*d2); //Producto cruzado
    simplificar(n_res, d_res);
}