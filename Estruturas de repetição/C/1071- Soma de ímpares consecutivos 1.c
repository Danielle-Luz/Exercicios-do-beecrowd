#include <stdio.h>
int main(){
    int x, y, soma;
    soma=0;
    scanf("%d %d", &x, &y);
    while(y<(x-1)){
        y+=1;
        if((y%2)!=0){
            soma+=y;
        }
    }
    printf("%d\n", soma);
   return 0;
}