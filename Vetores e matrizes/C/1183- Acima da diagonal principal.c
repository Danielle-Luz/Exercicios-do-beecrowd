#include <stdio.h>
int main(){
    char o;
    int i, x, quant;
    float m[12][12], resultado;
    scanf("%c",&o);
    resultado=0;
    quant=0;
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
            scanf("%f",&m[i][x]);
            if(x>i){
                resultado+=m[i][x];
                quant++;
            }
        }
    }
    if(o=='M'){
        resultado/=quant;
    }
    printf("%.1f\n",resultado);
    return 0;
}