#include <stdio.h>

void print_bytes(void *ptr, size_t size) {
    unsigned char *byte_ptr = (unsigned char *)ptr;
    for (size_t i = 0; i < size; ++i) {
        printf("%02x ", byte_ptr[i]);
    }
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int li = 0x0807060504030201;
    float f = 12.5f;
    double d = 1.0;
    long double ld = 1.0;

    printf("Octets de short :\n ");
    print_bytes(&s, sizeof(s));

    printf("Octets de int :\n ");
    print_bytes(&i, sizeof(i));

    printf("Octets de long int :\n ");
    print_bytes(&li, sizeof(li));

    printf("Octets de float :\n ");
    print_bytes(&f, sizeof(f));

    printf("Octets de double :\n ");
    print_bytes(&d, sizeof(d));

    printf("Octets de long double :\n ");
    print_bytes(&ld, sizeof(ld));

    return 0;
}
