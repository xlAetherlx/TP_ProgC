#include <stdio.h>

int main() {
    int d = 0x88001000;
    int resultat = 0;
    int taille = sizeof(int) * 8;
    int pos_bit4 = taille - 4;
    int pos_bit20 = taille - 20;
    int bit4 = (d >> pos_bit4) & 1;
    int bit20 = (d >> pos_bit20) & 1;
    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }
    printf("%d\n", resultat);
    return 0;
}


