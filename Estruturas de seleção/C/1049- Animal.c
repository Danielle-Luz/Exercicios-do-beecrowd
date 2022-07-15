#include <stdio.h>
#include <string.h>
int main(){
    char p1[15], p2[15], p3[15], result[15];
    scanf("%s",p1);
    scanf("%s",p2);
    scanf("%s",p3);
    if(strcmp(p1,"vertebrado")==0){
        if(strcmp(p2,"ave")==0){
            if(strcmp(p3,"carnivoro")==0){
                strcpy(result,"aguia");
            }
            if(strcmp(p3,"onivoro")==0){
                strcpy(result,"pomba");
            }
        }
        if(strcmp(p2,"mamifero")==0){
            if(strcmp(p3,"onivoro")==0){
                strcpy(result,"homem");
            }
            if(strcmp(p3,"herbivoro")==0){
                strcpy(result,"vaca");
            }
        }
    }
    if(strcmp(p1,"invertebrado")==0){
        if(strcmp(p2,"inseto")==0){
            if(strcmp(p3,"hematofago")==0){
                strcpy(result,"pulga");
            }
            if(strcmp(p3,"herbivoro")==0){
                strcpy(result,"lagarta");
            }
        }
        if(strcmp(p2,"anelideo")==0){
            if(strcmp(p3,"hematofago")==0){
                strcpy(result,"sanguessuga");
            }
            if(strcmp(p3,"onivoro")==0){
                strcpy(result,"minhoca");
            }
        }
    }
    printf("%s\n",result);
    return 0;
}