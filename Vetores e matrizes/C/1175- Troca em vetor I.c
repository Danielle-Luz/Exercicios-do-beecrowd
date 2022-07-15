#include <stdio.h>
int main(){
    int n[20],tamanho, guarda, i, x;
    x=0;
    tamanho=sizeof(n)/sizeof(int);
    for(i=0;i<tamanho;i++){
        scanf("%d",&n[i]);
    }
    tamanho-=1;
    for(i=0;i<10;i++){
        guarda=n[i];
        n[i]=n[tamanho-i];
        n[tamanho-i]=guarda; 
    }
    for(i=0;i<=tamanho;i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}