#ifndef COLORS_H
#define COLORS_H

/* Normal */
#define BLK "\033[0;30m"
#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define YEL "\033[0;33m"
#define BLU "\033[0;34m"
#define MAG "\033[0;35m"
#define CYN "\033[0;36m"
#define WHT "\033[0;37m"

/* Bold */
#define BBLK "\033[1;30m"
#define BRED "\033[1;31m"
#define BGRN "\033[1;32m"
#define BYEL "\033[1;33m"
#define BBLU "\033[1;34m"
#define BMAG "\033[1;35m"
#define BCYN "\033[1;36m"
#define BWHT "\033[1;37m"

/* Underline */
#define UBLK "\033[4;30m"
#define URED "\033[4;31m"
#define UGRN "\033[4;32m"
#define UYEL "\033[4;33m"
#define UBLU "\033[4;34m"
#define UMAG "\033[4;35m"
#define UCYN "\033[4;36m"
#define UWHT "\033[4;37m"

/* Background */
#define BGBLK "\033[40m"
#define BGRED "\033[41m"
#define BGGRN "\033[42m"
#define BGYEL "\033[43m"
#define BGBLU "\033[44m"
#define BGMAG "\033[45m"
#define BGCYN "\033[46m"
#define BGWHT "\033[47m"

/* High intensity text */
#define HBLK "\033[0;90m"
#define HRED "\033[0;91m"
#define HGRN "\033[0;92m"
#define HYEL "\033[0;93m"
#define HBLU "\033[0;94m"
#define HMAG "\033[0;95m"
#define HCYN "\033[0;96m"
#define HWHT "\033[0;97m"

/* Bold high intensity text */
#define BHBLK "\033[1;90m"
#define BHRED "\033[1;91m"
#define BHGRN "\033[1;92m"
#define BHYEL "\033[1;93m"
#define BHBLU "\033[1;94m"
#define BHMAG "\033[1;95m"
#define BHCYN "\033[1;96m"
#define BHWHT "\033[1;97m"

/* High intensity background */
#define HBGBLK "\033[0;100m"
#define HBGRED "\033[0;101m"
#define HBGGRN "\033[0;102m"
#define HBGYEL "\033[0;103m"
#define HBGBLU "\033[0;104m"
#define HBGMAG "\033[0;105m"
#define HBGCYN "\033[0;106m"
#define HBGWHT "\033[0;107m"

/* Reset */
#define COLOR_RESET "\033[0m"


/* Normal */
void black(void);
void red(void);
void green(void);
void yellow(void);
void blue(void);
void magenta(void);
void cyan(void);
void white(void);

/* Bold */
void bBlack(void);
void bRed(void);
void bGreen(void);
void bYellow(void);
void bBlue(void);
void bMagenta(void);
void bCyan(void);
void bWhite(void);

/* Underline */
void uBlack(void);
void uRed(void);
void uGreen(void);
void uYellow(void);
void uBlue(void);
void uMagenta(void);
void uCyan(void);
void uWhite(void);

/* Background */
void bgBlack(void);
void bgRed(void);
void bgGreen(void);
void bgYellow(void);
void bgBlue(void);
void bgMagenta(void);
void bgCyan(void);
void bgWhite(void);

/* High intensity text */
void hBlack(void);
void hRed(void);
void hGreen(void);
void hYellow(void);
void hBlue(void);
void hMagenta(void);
void hCyan(void);
void hWhite(void);

/* Bold high intensity text */
void bhBlack(void);
void bhRed(void);
void bhGreen(void);
void bhYellow(void);
void bhBlue(void);
void bhMagenta(void);
void bhCyan(void);
void bhWhite(void);

/* High intensity background */
void hbgBlack(void);
void hbgRed(void);
void hbgGreen(void);
void hbgYellow(void);
void hbgBlue(void);
void hbgMagenta(void);
void hbgCyan(void);
void hbgWhite(void);

/* Color reset */
void cReset(void);

#endif
