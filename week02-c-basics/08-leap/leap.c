#include <stdio.h>
#include <stdlib.h> // needed for atoi
#include <stdbool.h> // needed for bool type

int main(int argc, char **argv){
    // convert commandline argument to integer
    int year = atoi(argv[1]);
    // declare boolean var that represents whether year is leap or not
    bool isLeapYear = 0;
    // if year is not divisible by 4
    if(year%4 != 0) {
        // then it is a common year
        isLeapYear = 0;
    // else if year is not divisible by 100
    } else if(year%100 != 0) {
        // then it is a leap year
        isLeapYear = 1;
    // else if year is not divisible by 400
    } else if(year%400 != 0) {
        // then it is a common year
        isLeapYear = 0;
    // else
    } else {
        // it is a leap year
        isLeapYear = 1;
    }
    // if the year is a leap year
    if(isLeapYear){
        printf("%d is a leap year", year);
    // if the year is a common year (not a leap year)
    } else {
        printf("%d is not a leap year", year);
    }

    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/08-leap
