#include <stdio.h>

int f(int a, int b) {
    char *p = a;
    return (int) &p[b];
}

int main(void) {
    int a = 3;
    int b = 5;

    printf("%d\n", f(a, b));
}