#include <stdio.h>

int f(int a) {
    printf("%d\n", a);
    return 1;
}

int main(void) {
    int a = 0;

    // https://en.wikipedia.org/wiki/Short-circuit_evaluation
    if (a != 0 && f(a))
        printf("%d\n", a+1);
    else
        printf("%d\n", a+2);

    return 0;
}