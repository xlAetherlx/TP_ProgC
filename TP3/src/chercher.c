#include <stdio.h>

int comparer(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return s1[i] == '\0' && s2[i] == '\0';
}

int main() {
    const char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[256];
    printf("Entrez la phrase à rechercher :\n> ");
    if (!fgets(recherche, sizeof(recherche), stdin))
        return 1;

    int len = 0;
    while (recherche[len] != '\0') len++;
    if (len > 0 && recherche[len-1] == '\n') recherche[len-1] = '\0';

    int trouve = 0;
    for (int i = 0; i < 10; i++) {
        if (comparer(recherche, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("Phrase trouvée\n");
    else
        printf("Phrase non trouvée\n");

    return 0;
}
