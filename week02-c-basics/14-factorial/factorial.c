#include <stdio.h>
#include <stdlib.h>

// we use type unsigned long for a 64-bit unsigned integer
// function performs simple recursion to return factorial of parameter
unsigned long factorial(int n) {
    // base case when n is 0
    // as to why 0! is 1, please search details yourself
    if (n == 0) {
        return 1;
    // step case when n is bigger than 0
    // this ends up multiplying 1 by 1, 2, ... , n and returns the end product
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char **argv){
    // we really should check for invalid arguments
    // but this is omitted for the sake of focusing on the intended exercise
    int a = atoi(argv[1]);
    // call factorial function
    unsigned long fact = factorial(a);
    // print both values, making sure to use the correct specifier
    printf("%d! = %lu\n", a, fact);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/14-factorial
