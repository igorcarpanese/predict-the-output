
#include <stdio.h>

#define square(x) (x*x)

int main(void) {
    int x = 2;

    printf("%d\n", square(x+1));

    return 0;
}