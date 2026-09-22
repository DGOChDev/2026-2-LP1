#include <stdio.h>
int main(){
    int hasta = 50;
    for(int i=1; i<=hasta; i++){
        if(i%3 == 0){
            printf("%d es multiplo de 3\n", i);
        }

    }
    
    return 0;
}