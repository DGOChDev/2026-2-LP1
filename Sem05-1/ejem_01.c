//Pre-procesamiento

#include <stdio.h>
#define ANIO_ACTUAL 2027;

#ifndef _LINUX_
#define _SO_ "Windows"
#else 
#define _SO_ "Linux"
#endif
 
//Declaracion anticipada - prototipo 
void salu2();
int devolver_anio_actual();

int main(){
    salu2(); //Invocacion, uso de la funcion
    printf("El sistema operativo actual es %s", _SO_);

    return 0;
}
//Definicion de las funciones - implementacion

// Parámetros : NINGUNO
// Salida     : 1
//              Numérico de tipo entero
int devolver_anio_actual() {
    return ANIO_ACTUAL;
}


// Parametros : ninguno
// Salida     : ninguna (void)
void salu2(){  
    printf("Bienvenidos a SW303\n");
}