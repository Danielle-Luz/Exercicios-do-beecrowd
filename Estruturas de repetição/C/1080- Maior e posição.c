#include <stdio.h>
int main(){
    int lista[100], i, tamanho, maior, posicao;
    maior=0;
    posicao=0;
    for(i=0; i<(sizeof(lista)/sizeof(int)); i++){
        scanf("%d", &lista[i]);
        if(lista[i]>maior){
            maior=lista[i];
            posicao=i;
        }
    }
    printf("%d\n%d\n", maior, posicao+1);
    return 0;
}