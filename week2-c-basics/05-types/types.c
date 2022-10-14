// Below comments highlight the fixed parts of the code
#include <stdio.h>

int main(){
    // we add the variable type in declaration
    // specifier %u refers to an unsigned integer
    // so we use unsigned int as the variable type
    // see below link for format specifier details
    // https://www.javatpoint.com/c-format-specifier
    unsigned int variable = 10;

    printf("variable is %u\n", variable);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/05-types
