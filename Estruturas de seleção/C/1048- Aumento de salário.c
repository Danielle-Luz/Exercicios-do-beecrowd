#include <stdio.h>
#include <string.h>
int main(){
    float sal, reaj;
    char per[5];
    scanf("%f", &sal);
    if(sal>=0 && sal<=400){
        reaj=(sal/100)*15;
        sal+=reaj;
        strcpy(per,"15 %");
    }else if(sal<=800){
        reaj=(sal/100)*12;
        sal+=reaj;
        strcpy(per,"12 %");
    }else if(sal<=1200){
        reaj=(sal/100)*10;
        sal+=reaj;
        strcpy(per,"10 %");
    }else if(sal<=2000){
        reaj=(sal/100)*7;
        sal+=reaj;
        strcpy(per,"7 %");
    }else{
        reaj=(sal/100)*4;
        sal+=reaj;
        strcpy(per,"4 %");
    }
    printf("Novo salario: %.2f\n", sal);
    printf("Reajuste ganho: %.2f\n", reaj);
    printf("Em percentual: %s\n", per);
    return 0;
}