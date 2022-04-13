#include <stdio.h>
#include "colors.h"

int main(void) {
    black();
    printf("Black\n");

    red();
    printf("Red\n");

    green();
    printf("Green\n");

    yellow();
    printf("Yellow\n");

    blue();
    printf("Blue\n");

    magenta();
    printf("Magenta\n");

    cyan();
    printf("Cyan\n");

    white();
    printf("White\n");

    cReset();
    printf("Reset\n");
    return 0;
}
