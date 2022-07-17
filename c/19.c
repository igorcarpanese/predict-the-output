#include <stdio.h>

int main(void) {
    int a = 1;

    if (-- a) printf("1\n");
    else printf("2\n");

    return 0;
}