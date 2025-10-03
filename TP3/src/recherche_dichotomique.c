#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i = 0;
    int j = 0;
    int temp = 0;
    int recherche = 0;
    int debut = 0;
    int fin = 99;
    int milieu = 0;
    int trouve = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 201 - 100;
    }
    
    for (i = 0; i < 99; i++) {
        for (j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    printf("Tableau trie :\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");
    
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);
    
    debut = 0;
    fin = 99;
    trouve = 0;
    
    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        
        if (tableau[milieu] == recherche) {
            trouve = 1;
            debut = fin + 1;
        } else if (tableau[milieu] < recherche) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    
    printf("\nResultat : ");
    if (trouve == 1) {
        printf("entier present\n");
    } else {
        printf("entier absent\n");
    }
    
    return 0;
}
