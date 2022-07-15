#include <stdio.h>
int main(){
    double a, b, c, c2, b2;
    scanf("%lf %lf %lf", &a, &b, &c);
    c2=c;
    b2=b;
    if(a>b){
        if(a>c){
            if(b<c){
                c=b;
                b=c2;
            }
        }else if(b<c){
            c=b;
            b=a;
            a=c2;
        }
    }else if(b>c){
        if(c>a){
            c=a;
            b=c2;
            a=b2;
        }else{
            b=a;
            a=b2;
        }
    }else{
        c=a;
        a=c2;
    }
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((a*a)==((b*b)+(c*c))){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a)>((b*b)+(c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if((a*a)<((b*b)+(c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b && a!=c || b==c && b!=a || c==a && c!=b){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}