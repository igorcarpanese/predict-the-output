#include <stdio.h>

int a;

int f() {
    return a = 1;
}

int main(void) {
    int *b = &a;

    printf("%d %d\n", a, *b);
    f();
    printf("%d %d\n", a, *b);
    *b = 2;
    printf("%d %d\n", a, *b);
}