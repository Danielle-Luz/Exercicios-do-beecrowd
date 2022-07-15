#include <stdio.h>
int main(){
    int i, t, posicao, menor;
    do{
        scanf("%d",&t);
    }while(t<=1 || t>1000);
    int lista[t];
    for(i=0;i<t;i++){
        scanf("%d",&lista[i]);
        if(i==0){
            menor=lista[i];
            posicao=i;
        }
        if(lista[i]<menor){
            menor=lista[i];
            posicao=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,posicao);
    return 0;
}