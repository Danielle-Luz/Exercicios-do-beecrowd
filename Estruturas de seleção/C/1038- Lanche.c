#include <stdio.h>
int main(){
    int cod, quant;
    float total;
    scanf("%d %d", &cod, &quant);
    if(cod==1){
        total=4*quant;
    }else if(cod==2){
        total=4.50*quant;
    }else if(cod==3){
        total=5*quant;
    }else if(cod==4){
        total=2*quant;
    }else if(cod==5){
        total=1.50*quant;
    }
    printf("Total: R$ %.2f\n", total);
    return 0;
}