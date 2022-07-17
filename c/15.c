#include <stdio.h>

int main(void) {
    float f = 1.0;

    int i1 = (int) f;
    int i2 = * (int *) &f;

    printf("%d\n", i1);
    printf("%d\n", i2);

    return 0;
}