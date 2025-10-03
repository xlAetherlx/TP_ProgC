#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Bernard", "Dubois", "Lambert"};
    char prenoms[5][50] = {"Alice", "Pierre", "Sophie", "Lucas", "Emma"};
    char adresses[5][100] = {
        "12 rue de Paris, 75001 Paris",
        "45 avenue Victor Hugo, 69002 Lyon",
        "8 boulevard Gambetta, 31000 Toulouse",
        "23 rue Carnot, 33000 Bordeaux",
        "56 place de la Liberte, 59000 Lille"
    };
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 13.5, 17.0, 15.0, 15.5};
    
    int i = 0;
    
    printf("=== Liste des Etudiants ===\n\n");
    
    for (i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prenom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note Programmation en C: %.2f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation: %.2f\n", notes_sys[i]);
        printf("\n");
    }
    
    return 0;
}
