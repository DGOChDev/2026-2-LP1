#include<stdio.h>

int main(){
    double resultado=0.693147;
    unsigned i=0;
    double sum=0;
    double error_abs;
    for(;;){
        if(i%2==0){
            sum+=1.0/i+1;
        }else  {
            sum+=-1.0/i+1;
        }
        i++;

        if( i<=1e-6){
            break;
        } 
    }

    printf("Resultado obtenido: %.2f",sum);


    return 0;
}