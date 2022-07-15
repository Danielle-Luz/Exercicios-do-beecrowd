#include <stdio.h>
int main(){
    int x, y, i;
    do{
        scanf("%d",&x);
    }while(x<=1 || x>=1000);
    for(i=1;i<=x;i++){
        y=0;
        while(y<2){
            if(y==0){
                printf("%d %d %d\n", i, (i*i), (i*(i*i)));
            }else{
                printf("%d %d %d\n", i, ((i*i)+1), ((i*(i*i))+1));
            }
            y++;
        }
    }
    return 0;
}