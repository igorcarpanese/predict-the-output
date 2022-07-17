#include <stdio.h>

int main(void) {
    unsigned int i;

    for (i = 10; i >= 0; i--); {
        printf("%u\n", i);
    }
}