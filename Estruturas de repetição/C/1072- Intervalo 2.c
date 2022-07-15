#include <stdio.h>
int main(){
    int n, x, i, contadorIn, contadorOut;
    scanf("%d", &n);
    contadorIn=0;
    contadorOut=0;
    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            contadorIn++;
        }else{
            contadorOut++;
        }
    }
    printf("%d in\n%d out\n", contadorIn, contadorOut);
    return 0;
}