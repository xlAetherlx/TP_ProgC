#include <stdio.h>

int main() {
    char str1[100], str2[100], copie[100], concat[200];
    int i, j;

    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);

    int longueur1 = 0;
    while(str1[longueur1] != '\0') {
        longueur1++;
    }

    i = 0;
    while(str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';

    i = 0;
    while(str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }
    j = 0;
    while(str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("%d\n", longueur1);
    printf("%s\n", copie);
    printf("%s\n", concat);

    return 0;
}
