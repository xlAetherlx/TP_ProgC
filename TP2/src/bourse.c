#include <stdio.h>

int main() {
    int prix[] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2174, 2173, 2290, 1883, 1974};
    int n = sizeof(prix) / sizeof(prix[0]);

    int prix_max = prix[0];
    int perte_max = 0;

    for (int i = 1; i < n; i++) {
        if (prix[i] < prix_max) {
            int perte = prix_max - prix[i];
            if (perte > perte_max) {
                perte_max = perte;
            }
        } else {
            prix_max = prix[i];
        }
    }

    printf("Plus grande perte possible : %d\n", perte_max);
    return 0;
}

