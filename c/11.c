#include <stdio.h>

int main(void) {
    int i, a, b, c;

    for (i = 0; i < 10; i++)
        a = i,
        b = a,
        c = a + b;

    printf("%d %d %d\n", a, b, c);

    return 0;
}