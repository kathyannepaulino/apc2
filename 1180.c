#include <stdio.h>

int main(){
     
     int x, n;
     int menor, posicao;

     scanf("%d",&x);

     for(int i = 0; i < x; i++){
        scanf("%d", &n);
        
        menor = 0
        if(i == 0 || n < menor){
            menor = n;
            posicao = i;
        }

     }

        printf("Menor: %d\n", menor);
        printf("Posicao: %d\n", posicao);

        return 0;
}