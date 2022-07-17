#include <stdio.h>

int main(void) {
    double sum = 0.0;

    while (sum != 2.0)
        sum += 0.1;

    printf("%.6lf\n", sum);

    return 0;
}