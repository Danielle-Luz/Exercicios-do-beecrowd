#include <stdio.h>
#include <math.h>
int main(){
    double r, pi, total;
    scanf("%lf",&r);
    pi=3.14159;
    total=(4.0/3)*pi*pow(r,3);
    printf("VOLUME = %.3lf\n", total);
    return 0;
}