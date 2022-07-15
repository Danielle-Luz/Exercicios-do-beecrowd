#include <stdio.h>
#include <string.h>
int main(){
    float m[12][12], soma;
    int i, x, diminuidor, media;
    char o;
    soma=0;
    media=0;
    diminuidor=3;
    scanf("%c",&o);
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
            scanf("%f",&m[i][x]);
            if((x<i && i<6) || (i==6 && x<(i-1)) || (i>6 && x<(i-diminuidor))){
                soma+=m[i][x];
                media++;
            }
        }
        if(i>6){
            diminuidor+=2;
        }
    }
    if(o=='M'){
        soma=soma/media;
    }
    printf("%.1f\n",soma);
    return 0;
}