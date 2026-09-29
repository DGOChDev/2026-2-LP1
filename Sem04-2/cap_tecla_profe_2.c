#include <stdio.h>
#include <conio.h>
int main(){
    char c;
    for(;;){
        c = getch();
        if(c=='q'){
            printf("Se termino la lectura de caracteres");
            break;
        }
        else {
            printf("Se presiono la tecla: %c\n", c);
        }
    }

    return 0;
}