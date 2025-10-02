#include <stdio.h>

int main() {
    char c = 'A';
    unsigned char uc = 255;
    
    short s = -1000;
    unsigned short us = 5000;
    
    int i = -50000;
    unsigned int ui = 100000;
    
    long int li = -1000000;
    unsigned long int uli = 2000000;
    
    long long int lli = -9000000000;
    unsigned long long int ulli = 18000000000;
    
    float f = 3.14;
    
    double d = 123.456789;
    
    long double ld = 9876.543210;
    
    printf("char = %c\n", c);
    printf("unsigned char = %u\n", uc);
    
    printf("short = %d\n", s);
    printf("unsigned short = %u\n", us);
    
    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);
    
    printf("long int = %ld\n", li);
    printf("unsigned long int = %lu\n", uli);
    
    printf("long long int = %lld\n", lli);
    printf("unsigned long long int = %llu\n", ulli);
    
    printf("float = %f\n", f);
    
    printf("double = %lf\n", d);
    
    printf("long double = %Lf\n", ld);
    
    return 0;
}
