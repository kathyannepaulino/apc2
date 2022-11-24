#include <stdio.h>

int main(){
    
    int numeroLinhas, cont;
    
    scanf("%d", &numeroLinhas);

    cont = numeroLinhas*4;

    for(int i = 1; i < cont; i+=4){

        printf("%d %d %d PUM\n", i, i+1, i+2);
               
    }

    return 0;

}
