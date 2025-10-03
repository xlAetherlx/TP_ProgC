#include <stdio.h>

int main() {
    char c = 0x41;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int li = 0x123456789abcdef0;
    long long int lli = 0xfedcba9876543210;
    float f = 2.0f;
    double d = 3.14159;
    long double ld = 2.718281828;
    
    char *ptr_c = &c;
    short *ptr_s = &s;
    int *ptr_i = &i;
    long int *ptr_li = &li;
    long long int *ptr_lli = &lli;
    float *ptr_f = &f;
    double *ptr_d = &d;
    long double *ptr_ld = &ld;
    
    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)ptr_c, *ptr_c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ptr_s, *ptr_s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)ptr_i, *ptr_i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)ptr_li, *ptr_li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)ptr_lli, *ptr_lli);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)ptr_d, *(unsigned long long*)ptr_d);
    printf("Adresse de ld : %p, Valeur de ld : %llx\n", (void*)ptr_ld, *(unsigned long long*)ptr_ld);
    printf("\n");
    
    *ptr_c = 0x42;
    *ptr_s = 0x5678;
    *ptr_i = 0xa47865fe;
    *ptr_li = 0xfedcba9876543210;
    *ptr_lli = 0x123456789abcdef0;
    *ptr_f = 1.0f;
    *ptr_d = 2.71828;
    *ptr_ld = 3.14159265359;
    
    printf("Apres la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)ptr_c, *ptr_c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ptr_s, *ptr_s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)ptr_i, *ptr_i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)ptr_li, *ptr_li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)ptr_lli, *ptr_lli);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)ptr_f, *(unsigned int*)ptr_f);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)ptr_d, *(unsigned long long*)ptr_d);
    printf("Adresse de ld : %p, Valeur de ld : %llx\n", (void*)ptr_ld, *(unsigned long long*)ptr_ld);
    
    return 0;
}
