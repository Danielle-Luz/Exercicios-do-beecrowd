#include <stdio.h>
int main(){
    int n[10], i, x;
    x=0;
    do{
        scanf("%d",&n[0]);
    }while(n[0]>50);
    for(i=1;i<sizeof(n)/sizeof(int);i++){
        n[i]=n[i-1]*2;
        if(i==9 && x==0){
            i=0;
            x=1;
        }
        if(x==1){
            printf("N[%d] = %d\n", i, n[i]);
        }
    }
    return 0;
}