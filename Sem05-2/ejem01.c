#include <stdio.h>

int contador();
int contador2();
int clave3=20; //variable global
int contador3();

int main(){
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    // printf("%d", clave);  // clave es una variable local
    printf("Contador 3 es %d", contador3()); 

    return 0;
}

int contador(){
    static int clave = 0; //La variable ira avanzando cuantas veces lo invoques
    clave++;              //Da persistencia a la variable clave
    return clave;
}

int contador2(){
    int clave2 = 0; //Cada invocacion inicia desde 0
    clave2++;       //Variable efimera solo existe dentro del contador
    return clave2;
}

int contador3(){ 
    clave3++;
    return clave3;
}