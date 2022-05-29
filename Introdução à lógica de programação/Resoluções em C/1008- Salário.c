#include <stdio.h>
int main() {
    int numero, horasTrabalhadas;
    double salarioPorHora, salario;
    scanf("%d %d %lf", &numero, &horasTrabalhadas, &salarioPorHora);
    salario=salarioPorHora*horasTrabalhadas;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);
    return 0;
}