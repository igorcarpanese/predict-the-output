#include <stdio.h>

int main(void) {
    unsigned int i;

    for (i = 0; i >= 0; i++); {
        printf("%d\n", i);
    }
}