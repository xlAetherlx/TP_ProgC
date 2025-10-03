#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i = 0;
    int j = 0;
    int temp = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 201 - 100;
    }
    
    printf("Tableau non trie :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");
    
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    printf("Tableau trie par ordre croissant :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    return 0;
}
