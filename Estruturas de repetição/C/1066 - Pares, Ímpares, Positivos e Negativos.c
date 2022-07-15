#include <stdio.h>
int main(){
    int lista[5], i, pares, impares, positivos, negativos;
    pares=0;
    impares=0;
    positivos=0;
    negativos=0;
    for(i=0;i<sizeof(lista)/sizeof(int);i++){
        scanf("%d", &lista[i]);
        if((lista[i]%2)==0){
            pares++;
        }else{
            impares++;
        }
        if(lista[i]>0){
            positivos++;
        }else if(lista[i]!=0){
            negativos++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
    return 0;
}
