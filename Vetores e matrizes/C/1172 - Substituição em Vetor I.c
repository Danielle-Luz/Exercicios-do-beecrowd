#include <stdio.h>
int main(){
    int x[10], i, y;
    i=0;
    y=0;
    while(i<=sizeof(x)/sizeof(int)){
        if(y==0){
            scanf("%d",&x[i]);
            if(x[i]<=0){
                x[i]=1;
            }
        }
        if(i==9 && y==0){
            y=1;
            i=0;
        }
        if(y==1){
            printf("X[%d] = %d\n", i, x[i]);
            if(i==9){
                break;
            }
        }
        i++;
    }
    return 0;
}