#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i = 0;
    int plus_grand = 0;
    int plus_petit = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }
    
    plus_grand = tableau[0];
    plus_petit = tableau[0];
    
    for (i = 1; i < 100; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }
    
    printf("Le numero le plus grand est : %d\n", plus_grand);
    printf("Le numero le plus petit est : %d\n", plus_petit);
    
    return 0;
}
