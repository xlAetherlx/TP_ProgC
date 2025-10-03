#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    int u0 = 0;
    int u1 = 1;
    int temp;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            temp = u0 + u1;
            printf(", %d", temp);
            u0 = u1;
            u1 = temp;
        }
    }
    printf("\n");
    return 0;
}
