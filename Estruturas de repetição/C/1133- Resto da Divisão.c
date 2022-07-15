#include <stdio.h>
int main(){
    int x, y, y1, i;
    scanf("%d %d", &x, &y);
    y1=y;
    if(x>y){
        y=x;
        x=y1;
    }
    x++;
    while(x<y){
        if((x%5)==2 || (x%5)==3){
            printf("%d\n", x);
        }
        x++;
    }
    return 0;
}