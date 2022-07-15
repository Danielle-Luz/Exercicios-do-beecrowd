#include <stdio.h>
int main(){
    int r, x, alcool, gasolina, diesel;
    alcool=0;
    gasolina=0;
    diesel=0;
    x=1;
    while(x!=0){
        scanf("%d", &r);
        switch(r){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                x=0;
                break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    return 0;
}