#include <stdio.h>
int main(){
    float n1, n2, x, media;
    x=0;
    while(x!=1){
        scanf("%f", &n1);
        if(n1>=0 && n1<=10){
            x++;
        }else{
            printf("nota invalida\n");
        }
    }
    x=0;
    while(x!=1){
        scanf("%f", &n2);
        if(n2>=0 && n2<=10){
            x++;
        }else{
            printf("nota invalida\n");
        }
    }
    media=(n1+n2)/2;
    printf("media = %.2f\n", media);
    return 0;
}