#include <stdio.h>
int main(){
    float m[12][12], resultado;
    int c, i, x;
    char t;
    resultado=0;
    scanf("%d",&c);
    scanf("%c",&t);
    scanf("%c",&t);
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
            scanf("%f",&m[i][x]);
            if(x==c){
                resultado+=m[i][x];
            }
        }
    }
    if(t=='M'){
        resultado/=12;
    }
    printf("%.1f\n",resultado);
    return 0;
}