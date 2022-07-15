#include <stdio.h>
int main(){
    float a, b, c, per, area;
    scanf("%f %f %f", &a, &b, &c);
    if((a+b)>c && (a+c)>b && (c+b)>a){
        per=a+b+c;
        printf("Perimetro = %.1f\n", a+b+c);
    }else{
        area=((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}