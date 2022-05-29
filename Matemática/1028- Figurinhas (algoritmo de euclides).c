#include <stdio.h>
int mdc (int a, int b) {
    int resto, loop;
    loop = 1;
    while (loop == 1) {
        resto = a%b;
        if (resto == 0) {
            return b;
        }
        a = b;
        b = resto;
    }
}
int main () {
    int n, f1, f2;
    scanf ("%d", &n);
    while (n > 0) {
        scanf ("%d %d", &f1, &f2);
        printf("%d ", mdc (f1, f2));
        n--;
    }
    return 0;
}