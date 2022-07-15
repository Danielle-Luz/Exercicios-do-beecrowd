#include <stdio.h>
int main(){
    char o;
    float m[12][12], soma;
    int i, x, media;
    soma=0;
    media=0;
    scanf("%c",&o);
    for(i=0;i<12;i++){
        for(x=0;x<12;x++){
           scanf("%f",&m[i][x]);
           if(i<6 && x>(11-i) || i>5 && x>i){
               soma+=m[i][x];
               media++;
           }
        }
    }
    if(o=='M'){
        soma/=media;
    }
    printf("%.1f\n",soma);
    return 0;
}