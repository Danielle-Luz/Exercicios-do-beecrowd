#include <stdio.h>
int main() {
    int tempo, vm, distancia;
    float litros;
    scanf("%d %d", &tempo, &vm);
    distancia=vm*tempo;
    litros=distancia/12.0;
    printf("%.3f\n",litros);
    return 0;
}