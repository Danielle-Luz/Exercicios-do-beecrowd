#include <stdio.h>
int main(){
    int idade, anos, meses;
    anos=0;
    meses=0;
    scanf("%d",&idade);
    if(idade>=365){
        anos=idade/365;
        idade-=365*anos;
    }
    if(idade>=30){
        meses=idade/30;
        idade-=30*meses;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, meses, idade);
    return 0;
}