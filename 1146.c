#include <stdio.h>

int main(){

    int x = 1;
    
   do{
        scanf("%d", &x);

        if(x != 0){
            for(int i = 1; i < x; i++){
            printf("%d ", i);
        }
        printf("%d\n",x);
        }     
   }while(x != 0);

    return 0;
        
}
