#include <stdio.h>
#include <math.h>

int main() {
    double rayon;
    double aire, perimetre;
    
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);
    
    aire = M_PI * rayon * rayon;
   
    perimetre = 2 * M_PI * rayon;
   
    printf("\n=== Résultats pour un cercle de rayon %.2f ===\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);
    
    return 0;
}
