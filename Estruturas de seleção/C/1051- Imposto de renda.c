#include <stdio.h>
int main(){
    float sal, imp;
    imp=0;
    scanf("%f", &sal);
    if((sal-2000)>0){
        if((sal-2000)>1000){
            imp+=(((sal-2000)-(sal-3000))/100)*8;
        }else{
            imp+=((sal-2000)/100)*8;
        }
        if((sal-3000)>0){
            if((sal-3000)>1000){
                imp+=(((sal-3000)-(sal-4500))/100)*18;
            }else{
                imp+=((sal-3000)/100)*18;
            }
        }
        if((sal-4500)>0){
            imp+=((sal-4500)/100)*28;
        }
        printf("R$ %.2f\n", imp);
    }else{
        printf("Isento\n");
    }
    return 0;
}