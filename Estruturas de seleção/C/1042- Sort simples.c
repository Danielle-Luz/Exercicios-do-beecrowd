#include <stdio.h>
int main(){
    int lista[3], listaCresc[3];
    scanf("%d %d %d", &lista[0], &lista[1], &lista[2]);
    listaCresc[0]=lista[1]<lista[0] && lista[1]<lista[2] ? lista[1] : lista[2]<lista[0] && lista[2]<lista[1] ? lista[2] : lista[0];
    listaCresc[1]=lista[1]!=listaCresc[0] && lista[1]>listaCresc[0] && lista[1]<lista[2] || lista[1]!=listaCresc[0] && lista[1]<lista[0] ? lista[1] : lista[2]!=listaCresc[0] && lista[2]>listaCresc[0] && lista[2]<lista[1] || lista[2]!=listaCresc[0] && lista[2]<lista[0] ? lista[2] : lista[0]; 
    listaCresc[2]=lista[0]!=listaCresc[0] && lista[0]!=listaCresc[1] ? lista[0] : lista[1]!=listaCresc[0] && lista[1]!=listaCresc[1] ? lista[1] : lista[2];
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", listaCresc[0], listaCresc[1], listaCresc[2], lista[0], lista[1], lista[2]);
    return 0;
}