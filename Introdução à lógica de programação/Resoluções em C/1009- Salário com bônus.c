#include <stdio.h>
int main() {
    double salarioFixo, totalVendas, final;
    char nome[15];
    scanf("%s %lf %lf", &nome, &salarioFixo, &totalVendas);
    final=((totalVendas/100)*15)+salarioFixo;
    printf("TOTAL = R$ %.2lf\n", final);
    return 0;
}