#include <stdio.h>
int main(){
    int lista[5], i, contador;
    contador=0;
    for(i=0;i<sizeof(lista)/sizeof(int);i++){
        scanf("%d", &lista[i]);
        if((lista[i]%2)==0){
            contador++;
        }
    }
    printf("%d valores pares\n", contador);
    return 0;
}