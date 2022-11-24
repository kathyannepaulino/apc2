#include <stdio.h>

int main(){

    int x, soma = 0;

    do{
        scanf("%d", &x);
        
        if(x !=0 ){

            if(x % 2 != 0 ){
                x++;
            }

            for(int i = 0; i < 5; i++ ){
                soma += x;
                x+=2;
            }

            printf("%d", soma);
            printf("\n");
            soma = 0;

        }
             
    }while(x != 0);

    return 0;

}