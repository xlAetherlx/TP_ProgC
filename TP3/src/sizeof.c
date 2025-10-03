#include <stdio.h>

int main() {
    printf("La taille de char est : %lu octets\n", sizeof(char));
    printf("La taille de short est : %lu octets\n", sizeof(short));
    printf("La taille de int est : %lu octets\n", sizeof(int));
    printf("La taille de long est : %lu octets\n", sizeof(long));
    printf("La taille de long long est : %lu octets\n", sizeof(long long));
    printf("La taille de float est : %lu octets\n", sizeof(float));
    printf("La taille de double est : %lu octets\n", sizeof(double));
    printf("La taille de long double est : %lu octets\n", sizeof(long double));
    printf("\n");
    
    printf("La taille de int* est : %lu octets\n", sizeof(int*));
    printf("La taille de int** est : %lu octets\n", sizeof(int**));
    printf("La taille de int*** est : %lu octets\n", sizeof(int***));
    printf("\n");
    
    printf("La taille de char* est : %lu octets\n", sizeof(char*));
    printf("La taille de char** est : %lu octets\n", sizeof(char**));
    printf("La taille de char*** est : %lu octets\n", sizeof(char***));
    printf("\n");
    
    printf("La taille de float* est : %lu octets\n", sizeof(float*));
    printf("La taille de float** est : %lu octets\n", sizeof(float**));
    printf("La taille de float*** est : %lu octets\n", sizeof(float***));
    printf("\n");
    
    printf("La taille de double* est : %lu octets\n", sizeof(double*));
    printf("La taille de double** est : %lu octets\n", sizeof(double**));
    printf("La taille de double*** est : %lu octets\n", sizeof(double***));
    
    return 0;
}
