#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c, maiorAb, maiorBc;
    scanf("%d %d %d", &a, &b, &c);
    maiorAb=(a+b+abs(a-b))/2;
    maiorBc=(maiorAb+c+abs(maiorAb-c))/2;
    printf("%d eh o maior\n",maiorBc);
    return 0;
}