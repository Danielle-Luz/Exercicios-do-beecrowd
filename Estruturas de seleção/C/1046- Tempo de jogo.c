#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, tempo;
    scanf("%d %d", &a, &b);
    if(a>=b){
        b+=24;
    }
    tempo=abs(a-b);
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    return 0;
}