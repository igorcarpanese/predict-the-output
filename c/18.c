#include <stdio.h>

int f(int a, int b) {
    return printf("%*c%*c", a, '\r', b, '\r');
}

int main(void) {
    int a = 3;
    int b = 5;

    printf("%d\n", f(a, b));
}