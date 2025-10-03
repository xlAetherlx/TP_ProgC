#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab_int[11];
    float tab_float[11];
    int *ptr_int = tab_int;
    float *ptr_float = tab_float;
    int i = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 11; i++) {
        *(ptr_int + i) = rand() % 150 + 1;
        *(ptr_float + i) = (float)(rand() % 1000) / 100.0;
    }
    
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    ptr_int = tab_int;
    for (i = 0; i < 11; i++) {
        printf("%d", *ptr_int);
        if (i < 10) {
            printf(", ");
        }
        ptr_int++;
    }
    printf("\n\n");
    
    printf("Tableau de nombres a virgule flottante (avant la multiplication par 3) :\n");
    ptr_float = tab_float;
    for (i = 0; i < 11; i++) {
        printf("%.2f", *ptr_float);
        if (i < 10) {
            printf(", ");
        }
        ptr_float++;
    }
    printf("\n\n");
    
    ptr_int = tab_int;
    for (i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(ptr_int + i) = *(ptr_int + i) * 3;
        }
    }
    
    ptr_float = tab_float;
    for (i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(ptr_float + i) = *(ptr_float + i) * 3;
        }
    }
    
    printf("Tableau d'entiers (apres la multiplication par 3) :\n");
    ptr_int = tab_int;
    for (i = 0; i < 11; i++) {
        printf("%d", *ptr_int);
        if (i < 10) {
            printf(", ");
        }
        ptr_int++;
    }
    printf("\n\n");
    
    printf("Tableau de nombres a virgule flottante (apres la multiplication par 3) :\n");
    ptr_float = tab_float;
    for (i = 0; i < 11; i++) {
        printf("%.2f", *ptr_float);
        if (i < 10) {
            printf(", ");
        }
        ptr_float++;
    }
    printf("\n");
    
    return 0;
}
