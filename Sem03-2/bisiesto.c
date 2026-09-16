#include <stdio.h>
int main(void){
    //Reescribir sin usar if
    int anio = 2024;
    int bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    printf("%d es bisiesto: %d\n", anio, bisiesto);

    return 0;
}