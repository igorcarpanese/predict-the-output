#include <stdio.h>

int main(void) {
    int a, b, c;

    a = 1, b = 2, c = 3, a = b + c, b = a + c, c = a + b;

    printf("%d %d %d\n", a, b, c);

    return 0;
}