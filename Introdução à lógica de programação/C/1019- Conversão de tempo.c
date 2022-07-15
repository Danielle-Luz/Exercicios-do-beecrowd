#include <stdio.h>
int main(){
    int h, m, n;
    scanf("%d",&n);
    h=0;
    m=0;
    if(n>1200){
        h=n/(60*60);
        n-=(60*60)*h;
    }
    if(n>120){
        m=n/60;
        n-=60*m;
    }
    printf("%d:%d:%d\n",h,m,n);
    return 0;
}