#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //for using boolean vars

int main(int argc, char **argv){
    int year = atoi(argv[1]);
    bool isLeapYear = 0;
    if(year%4 != 0) {
        isLeapYear = 0;
    } else if(year%100 != 0) {
        isLeapYear = 1;
    } else if(year%400 != 0) {
        isLeapYear = 0;
    } else {
        isLeapYear = 1;
    }
    if(isLeapYear){
        printf("%d is a leap year", year);
    } else {
        printf("%d is not a leap year", year);
    }

    return 0;
}