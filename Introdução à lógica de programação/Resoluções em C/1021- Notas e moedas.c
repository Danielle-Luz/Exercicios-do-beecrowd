#include <stdio.h>
int main(){
    double n;
    int valor, cem, cinq, vinte, dez, cinco, dois, umr, cinqc, vintec, dezc, cincoc, umc;
    scanf("%lf",&n);
    valor=n*1000;
    cem=valor/100000;
    valor-=cem*100000;
    cinq=valor/50000;
    valor-=cinq*50000;
    vinte=valor/20000;
    valor-=vinte*20000;
    dez=valor/10000;
    valor-=dez*10000;
    cinco=valor/5000;
    valor-=cinco*5000;
    dois=valor/2000;
    valor-=dois*2000;
    umr=valor/1000;
    valor-=umr*1000;
    cinqc=valor/500;
    valor-=cinqc*500;
    vintec=valor/250;
    valor-=vintec*250;
    dezc=valor/100;
    valor-=dezc*100;
    cincoc=valor/50;
    valor-=cincoc*50;
    umc=valor/10;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", cem, cinq, vinte, dez, cinco, dois);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", umr, cinqc, vintec, dezc, cincoc, umc);
    return 0;
}