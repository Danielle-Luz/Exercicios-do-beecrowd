#include <stdio.h>
int main () {
    int n, r, v, d, i, teste;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d %d", &r, &v);
        d = 1;
        teste = 0;
        for (i = 2; i <= (r>v?r:v); i++) {
            if ((r%i) == 0 && (v%i) == 0) {
                d *= i;
                teste = 1;
            }
            r = (r%i) == 0 ? (r / i) : r;
            v = (v%i) == 0 ? (v / i) : v;
            if (teste == 1) {
                i--;
            }
            teste = 0;
        }
        printf ("%d\n", d);
        n--;
    }
    return 0;
}