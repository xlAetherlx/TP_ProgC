#include <stdio.h>

int main() {
    int d = 0x10000000;
    int resultat = 0;
    int bit4 = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;
    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }
    printf("%d\n", resultat);
    return 0;
}

