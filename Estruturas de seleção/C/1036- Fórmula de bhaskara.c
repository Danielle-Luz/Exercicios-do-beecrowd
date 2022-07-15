#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, r1, r2, delta, valor1, valor2;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta=pow(b,2)-(4*a*c);
    valor1=(-b)+sqrt(delta);
    valor2=(-b)-sqrt(delta);
    if(a!=0 && valor1!=0 && valor2!=0 && delta>=0){
        r1=valor1/(2*a);
        r2=valor2/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }else{
        printf("Impossivel calcular\n");
    }
    return 0;
}