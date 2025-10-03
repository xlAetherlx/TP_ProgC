#include <stdio.h>

struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    struct Couleur couleurs[10];
    int i = 0;
    
    couleurs[0].rouge = 0xef;
    couleurs[0].vert = 0x78;
    couleurs[0].bleu = 0x12;
    couleurs[0].alpha = 0xff;
    
    couleurs[1].rouge = 0x2c;
    couleurs[1].vert = 0xc8;
    couleurs[1].bleu = 0x64;
    couleurs[1].alpha = 0xff;
    
    couleurs[2].rouge = 0xff;
    couleurs[2].vert = 0x00;
    couleurs[2].bleu = 0x00;
    couleurs[2].alpha = 0xff;
    
    couleurs[3].rouge = 0x00;
    couleurs[3].vert = 0xff;
    couleurs[3].bleu = 0x00;
    couleurs[3].alpha = 0xff;
    
    couleurs[4].rouge = 0x00;
    couleurs[4].vert = 0x00;
    couleurs[4].bleu = 0xff;
    couleurs[4].alpha = 0xff;
    
    couleurs[5].rouge = 0xff;
    couleurs[5].vert = 0xff;
    couleurs[5].bleu = 0x00;
    couleurs[5].alpha = 0x80;
    
    couleurs[6].rouge = 0xff;
    couleurs[6].vert = 0x00;
    couleurs[6].bleu = 0xff;
    couleurs[6].alpha = 0x80;
    
    couleurs[7].rouge = 0x00;
    couleurs[7].vert = 0xff;
    couleurs[7].bleu = 0xff;
    couleurs[7].alpha = 0x80;
    
    couleurs[8].rouge = 0x80;
    couleurs[8].vert = 0x80;
    couleurs[8].bleu = 0x80;
    couleurs[8].alpha = 0xff;
    
    couleurs[9].rouge = 0x1a;
    couleurs[9].vert = 0x1a;
    couleurs[9].bleu = 0x1a;
    couleurs[9].alpha = 0xff;
    
    for (i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].rouge);
        printf("Vert : %u\n", couleurs[i].vert);
        printf("Bleu : %u\n", couleurs[i].bleu);
        printf("Alpha : %u\n", couleurs[i].alpha);
        printf("\n");
    }
    
    return 0;
}
