#include <stdio.h>
int main(){
    char o;
    int i, x, quant, max;
    float m[12][12], resultado;
    scanf("%c",&o);
    resultado=0;
    quant=0;
    max=11;
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
            scanf("%f",&m[i][x]);
            if(x<max){
                resultado+=m[i][x];
                quant++;
            }
        }
        max--;
    }
    if(o=='M'){
        resultado/=quant;
    }
    printf("%.1f\n",resultado);
    return 0;
}