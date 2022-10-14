#include <stdio.h>

int main() {
    // we assign correct types to each variable, as given in the exercise
    int int_var = 42;
    double double_var = 24;
    /* %d and %f are format specifiers.
     * The subsequent variables are substituted to these specifiers
     * Different specifiers specify different formats
     * %d is integer, %f is floating-point values. Prints to 6 d.p. by default
     * https://www.javatpoint.com/c-format-specifier
     * above link contains more details */
    printf("int_var: %d\n", int_var);
    printf("double_var: %f\n", double_var);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/03-variables
