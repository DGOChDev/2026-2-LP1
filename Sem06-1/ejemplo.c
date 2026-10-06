#include <stdio.h>
int main(){
    int n[5];

// colocar un #define facilita el codigo en caso de ser más complejo solo se modifica ese #define 

    for(size_t i=0; i<5; ++i){
        n[i]=0;
    }

    printf("%s%8s\n", "Element", "Value");

    for(size_t i=0; i<5; ++i){
        printf("%7zu%8d\n", i, n[i]);
    }

    return 0;
}