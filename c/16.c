#include <stdio.h>

int main(void) {
   char txt[10] = "abcdefghi";

    for (int i = 0; txt[i] != '\0'; i++)
        txt[i] &= ~(1 << 5);

    printf("%s\n", txt);

   return 0;
}