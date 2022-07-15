#include <stdio.h>
int main(){
    float a[100];
    int i, x;
    x=0;
    for(i=0;i<sizeof(a)/sizeof(int);i++){
        if(x==0){
            scanf("%f", &a[i]);
            if(i==99){
                i=0;
                x=1;
            }
        }
        if(x==1 && a[i]<=10){
            printf("A[%d] = %.1f\n", i, a[i]);
        }
    }
    return 0;
}