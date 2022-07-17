#include <stdio.h>

int main(void) {
    int i;
    int n;

    for (i = 0, n = 0; i < 10; i++) {
        n += i % 2 == 0;
    }

    printf("%d\n", n);
}