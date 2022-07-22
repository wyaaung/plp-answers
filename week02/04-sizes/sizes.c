#include <stdio.h>

int main() {
    int int_size = sizeof(int);
    int double_size = sizeof(double);
    int verylongint_size = sizeof(unsigned long long int);
    int product = int_size * double_size * verylongint_size;
    printf("%d\n", int_size);
    printf("%d\n", double_size);
    printf("%d\n", verylongint_size);
    printf("%d\n", product);
    return 0;
}
