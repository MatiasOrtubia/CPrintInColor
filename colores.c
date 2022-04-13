#include <stdio.h>

int main(void) {

    /* NEGRO */
    printf("\033[0;30m");
    printf("NEGRO\n");

    /* ROJO */
    printf("\033[0;31m"); 
    printf("ROJO\n");

    /* VERDE */
    printf("\033[1;32m");
    printf("VERDE\n");

    /* AMARILLO */
    printf("\033[0;33m");
    printf("AMARILLO\n");

    /* AZUL */
    printf("\033[0;34m");
    printf("AZUL\n");
    
    /* VIOLETA */
    printf("\033[0;35m");
    printf("VIOLETA\n");

    /* CYAN */
    printf("\033[0;36m");
    printf("CYAN\n");

    /* BLANCO */
    printf("\033[0;37m");
    printf("BLANCO");

    /* Si quiero que este en bold, cambio el 0 que esta entre [0; por un 1 */
    
    putchar('\n');
    return 0;
}
