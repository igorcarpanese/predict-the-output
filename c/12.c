#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 1;
    int c = 2;

    if (a > b)
        if (b > c)
            printf("1\n");
    else
        printf("2\n");

    return 0;
}