#include <stdio.h>
int main(){
    int n[1000], t, x, i;
    do{
        scanf("%d",&t);
    }while(t<2 || t>50);
    x=0;
    for(i=0;i<sizeof(n)/sizeof(int);i++){
        n[i]=x;
        x++;
        if(x==t){
            x=0;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}