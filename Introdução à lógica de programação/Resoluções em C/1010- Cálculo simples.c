#include <stdio.h>
int main(){
    int num_1, num_2, quant_1, quant_2;
    double v_1, v_2, total;
    scanf("%d %d %lf", &num_1, &quant_1, &v_1);
    scanf("%d %d %lf", &num_2, &quant_2, &v_2);
    total=(v_1*quant_1)+(v_2*quant_2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}