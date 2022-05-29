#include <stdio.h>
int main(){
    int n, valor, cem, cinq, vinte, dez, cinco, dois, um;
    scanf("%d",&n);
    valor=n;
    cem=valor/100;
    valor-=cem*100;
    cinq=valor/50;
    valor-=cinq*50;
    vinte=valor/20;
    valor-=vinte*20;
    dez=valor/10;
    valor-=dez*10;
    cinco=valor/5;
    valor-=cinco*5;
    dois=valor/2;
    valor-=dois*2;
    um=valor/1;
    valor-=um*1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, cem, cinq, vinte, dez, cinco, dois, um);
    return 0;
}