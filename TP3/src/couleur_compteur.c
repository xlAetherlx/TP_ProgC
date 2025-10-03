#include <stdio.h>
#include <stdint.h>

#define N 100

typedef struct {
    uint8_t r, g, b, a;
} Couleur;

typedef struct {
    Couleur couleur;
    int count;
} CouleurCount;

int couleurs_egales(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main() {
    Couleur couleurs[N];
    for(int i = 0; i < N; ++i) {
        couleurs[i].r = i % 256;
        couleurs[i].g = (i*2) % 256;
        couleurs[i].b = (i*3) % 256;
        couleurs[i].a = 255;
    }

    CouleurCount distinctes[N];
    int nb_distinctes = 0;

    for(int i = 0; i < N; ++i) {
        int trouve = 0;
        for(int j = 0; j < nb_distinctes; ++j) {
            if(couleurs_egales(couleurs[i], distinctes[j].couleur)) {
                distinctes[j].count++;
                trouve = 1;
                break;
            }
        }
        if(!trouve) {
            distinctes[nb_distinctes].couleur = couleurs[i];
            distinctes[nb_distinctes].count = 1;
            nb_distinctes++;
        }
    }

    for(int i = 0; i < nb_distinctes; ++i) {
        printf("%02x %02x %02x %02x : %d\n",
            distinctes[i].couleur.r,
            distinctes[i].couleur.g,
            distinctes[i].couleur.b,
            distinctes[i].couleur.a,
            distinctes[i].count
        );
    }

    return 0;
}
