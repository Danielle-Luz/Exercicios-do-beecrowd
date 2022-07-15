#include <stdio.h>
int main(){
    int n, contador;
    contador=0;
    scanf("%d", &n);
    while(contador<6){
        if((n%2)!=0){
            printf("%d\n", n);
            contador++;
        }
        n++;
    }
    return 0;
}