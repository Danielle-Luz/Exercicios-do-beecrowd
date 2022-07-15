#include <stdio.h>
int main(){
    int x, i;
    do{
        scanf("%d", &x);
    }while(x<1 || x>1000);
    for(i=0; i<=x; i++){
        if((i%2)!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}