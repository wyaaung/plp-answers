#include <stdio.h>
#include <stdlib.h> //needed for atoi/atof

int main(int argc, char **argv){
    // We use the double type for floating point numbers
    // atof converts the string argument to float
    // We can access the command line arguments by calling argv[n]
    // argv[0] contains the name of the program file, so we start at argv[1]
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double product = a * b * c;
    // %f specifies 6 d.p. by default
    printf("%f\n", product);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/07-cmdline
