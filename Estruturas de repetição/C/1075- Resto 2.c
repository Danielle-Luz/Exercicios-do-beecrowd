#include <stdio.h>
int main(){
    int n, x;
    do{
        scanf("%d", &n);
    }while(n>=10000);
    x=2;
    while(x<10000){
        if((x%n)==2){
            printf("%d\n", x);
        }
        x++;
    }
    return 0;
}