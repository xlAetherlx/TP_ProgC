#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    
    printf("Génération de la pyramide de nombres...\n\n");
    
    for (i = 1; i <= n; i++) {
      
        for (j = 1; j <= n - i; j++) {
            printf("  "); 
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
      
        printf("\n");
    }
    
    printf("\nGénération de la pyramide terminée !\n");
    
    return 0;
}
