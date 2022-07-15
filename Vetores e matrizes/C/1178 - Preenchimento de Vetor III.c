#include <stdio.h>
int main(){
    double n[100];
    int i, x;
    x=0;
    scanf("%lf",&n[0]);
    for(i=1;i<(sizeof(n)/sizeof(double));i++){
        if(x==0){
            n[i]=n[i-1]/2;
            if(i==99){
                x=1;
                i=0;
            }  
        }
        if(x==1){
            printf("N[%d] = %.4lf\n", i, n[i]);
        }
    }
    return 0;
}