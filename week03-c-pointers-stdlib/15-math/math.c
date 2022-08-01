#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
    // print out input prompt and use scanf() to read a double
    printf("Input a number:\n");
    double n;
    // scanf reads a token matching the format from the standard input
    // and stores the read token into the address given
    // %lf specifies a double type floating-point number
    scanf("%lf", &n);

    // print out input prompt and use scanf() to read an integer
    printf("Input 0 for ceil, 1 for floor\n");
    int floorinput;
    // %d specifies an integer
    scanf("%d", &floorinput);
    // 0 evaluates to false, 1 evaluates to true
    // apply floor or celing function to n, accordingly to input
    if (floorinput) {
        n = floor(n);
    }else{
        n = ceil(n);
    }
    // print the resulting value of n
    printf("%lf\n", n);

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week3-c-pointers-stdlib/15-math
