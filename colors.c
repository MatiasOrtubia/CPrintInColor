#include <stdio.h>
#include "colors.h"


/* Normal */

void black(void) {
    printf("%s", BLK);
}
void red(void) {
    printf("%s", RED);
}

void green(void) {
    printf("%s", GRN);
}

void yellow(void) {
    printf("%s", YEL);
}

void blue(void) {
    printf("%s", BLU);
}

void magenta(void) {
    printf("%s", MAG);
}

void cyan(void) {
    printf("%s", CYN);
}

void white(void) {
    printf("%s", WHT);
}


/* Bold */

void bBlack(void) {
    printf("%s", BBLK);
}
void bRed(void) {
    printf("%s", BRED);
}

void bGreen(void) {
    printf("%s", BGRN);
}

void bYellow(void) {
    printf("%s", BYEL);
}

void bBlue(void) {
    printf("%s", BBLU);
}

void bMagenta(void) {
    printf("%s", BMAG);
}

void bCyan(void) {
    printf("%s", BCYN);
}

void bWhite(void) {
    printf("%s", BWHT);
}


/* Underline */

void uBlack(void) {
    printf("%s", UBLK);
}
void uRed(void) {
    printf("%s", URED);
}

void uGreen(void) {
    printf("%s", UGRN);
}

void uYellow(void) {
    printf("%s", UYEL);
}

void uBlue(void) {
    printf("%s", UBLU);
}

void uMagenta(void) {
    printf("%s", UMAG);
}

void uCyan(void) {
    printf("%s", UCYN);
}

void uWhite(void) {
    printf("%s", UWHT);
}


/* Background */

void bgBlack(void) {
    printf("%s", BGBLK);
}
void bgRed(void) {
    printf("%s", BGRED);
}

void bgGreen(void) {
    printf("%s", BGGRN);
}

void bgYellow(void) {
    printf("%s", BGYEL);
}

void bgBlue(void) {
    printf("%s", BGBLU);
}

void bgMagenta(void) {
    printf("%s", BGMAG);
}

void bgCyan(void) {
    printf("%s", BGCYN);
}

void bgWhite(void) {
    printf("%s", BGWHT);
}


/* High intensity text */

void hBlack(void) {
    printf("%s", HBLK);
}
void hRed(void) {
    printf("%s", HRED);
}

void hGreen(void) {
    printf("%s", HGRN);
}

void hYellow(void) {
    printf("%s", HYEL);
}

void hBlue(void) {
    printf("%s", HBLU);
}

void hMagenta(void) {
    printf("%s", HMAG);
}

void hCyan(void) {
    printf("%s", HCYN);
}

void hWhite(void) {
    printf("%s", HWHT);
}


/* Bold high intensity text */

void bhBlack(void) {
    printf("%s", BHBLK);
}
void bhRed(void) {
    printf("%s", BHRED);
}

void bhGreen(void) {
    printf("%s", BHGRN);
}

void bhYellow(void) {
    printf("%s", BHYEL);
}

void bhBlue(void) {
    printf("%s", BHBLU);
}

void bhMagenta(void) {
    printf("%s", BHMAG);
}

void bhCyan(void) {
    printf("%s", BHCYN);
}

void bhWhite(void) {
    printf("%s", BHWHT);
}


/* High intensity background */

void hbgBlack(void) {
    printf("%s", HBGBLK);
}
void hbgRed(void) {
    printf("%s", HBGRED);
}

void hbgGreen(void) {
    printf("%s", HBGGRN);
}

void hbgYellow(void) {
    printf("%s", HBGYEL);
}

void hbgBlue(void) {
    printf("%s", HBGBLU);
}

void hbgMagenta(void) {
    printf("%s", HBGMAG);
}

void hbgCyan(void) {
    printf("%s", HBGCYN);
}

void hbgWhite(void) {
    printf("%s", HBGWHT);
}


/* Color reset */

void cReset(void) {
    printf("%s", COLOR_RESET);
}
