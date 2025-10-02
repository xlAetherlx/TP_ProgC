#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;
    
    for (int i = 0; i < taille; i++) {
        int num = nombres[i];
        printf("%d en binaire : ", num);
        
        for (int j = 31; j >= 0; j--) {
            int bit = (num >> j) & 1;
            printf("%d", bit);
            
            if (j % 4 == 0 && j > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
