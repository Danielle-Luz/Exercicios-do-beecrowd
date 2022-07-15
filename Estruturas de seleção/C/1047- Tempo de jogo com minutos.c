#include <stdio.h>
int main(){
    int hi, mi, hf, hf_2, mf, mf_2, hdif, mdif;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    hf_2=hf;
    mf_2=mf;
    if(hi>=hf){
        hf+=24;
    }
    hdif=hf-hi;
    if(mi>=mf){
        mf+=60;
        hdif-=1;
    }
    mdif=mf-mi;
    if(mdif==60){
        hdif+=1;
        mdif=0;
    }
    if(hdif==24 && mdif>0){
        hdif=0;
    }
    if(hi==hf_2 && mf_2==mi){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hdif, mdif);
    }
    return 0;
}