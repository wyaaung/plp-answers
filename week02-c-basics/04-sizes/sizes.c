#include <stdio.h>

int main() {
    // sizeof(TYPE) returns the memory size of given type in bytes
    // each variable holds the output for each line
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
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/04-sizes
