#include <stdio.h>
int main(){
    char o;
    int i, x, quant, max, min;
    double m[12][12], resultado;
    scanf("%c",&o);
    resultado=0;
    quant=0;
    max=6;
    min=5;
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
            scanf("%lf",&m[i][x]);
            if(x<=max && x>=min && i>=7){
                resultado+=m[i][x];
                quant++;
            }
        }
        if(i>=7){
            max++;
            min--;
        }
    }
    if(o=='M'){
        resultado/=quant;
    }
    printf("%.1lf\n",resultado);
    return 0;
}