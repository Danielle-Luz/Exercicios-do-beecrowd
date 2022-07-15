#include <stdio.h>
int main(){
    float lista[6], soma, media;
    int tamanho, contador;
    tamanho=sizeof(lista)/sizeof(float);
    soma=0;
    contador=0;
    int i=0;
    for(i=0;i<tamanho;i++){
        scanf("%f", &lista[i]);
        if(lista[i]>=0){
            soma+=lista[i];
            contador++;
        }
        if(i==(tamanho-1) && contador==0){
            i-=1;
            continue;
        }
    }
    media=soma/contador;
    printf("%d valores positivos\n%.1f\n", contador, media);
    return 0;
}