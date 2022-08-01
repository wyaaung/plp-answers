#include <stdio.h>
#include <stdlib.h>

// struct provided in the exercise
struct timestamp{
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

// function that adds two timestamps together
struct timestamp add_timestamps(struct timestamp a, struct timestamp b){
    // declare a new timestamp that holds the result
    struct timestamp sum;
    // add each second/minute/hour separately
    sum.second = a.second + b.second;
    sum.minute = a.minute + b.minute;
    sum.hour = a.hour + b.hour;
    // perform carry operations on seconds and minutes
    if(sum.second > 59){
        sum.minute++;
        sum.second -= 60;
    }
    if(sum.minute > 59){
        sum.hour++;
        sum.minute -= 60;
    }
    // return the resulting timestamp
    return sum;
}

int main(int argc, char **argv){
    // if command line argument count is not 6, print error and exit program
    if(argc != 7){
        printf("Please provide 6 commandline arguments");
        return -1;
    }
    // declare empty timestamps
    struct timestamp a;
    struct timestamp b;
    // construct two timestamps from 6 commandline arguments
    a.hour = atoi(argv[1]);
    a.minute = atoi(argv[2]);
    a.second = atoi(argv[3]);
    b.hour = atoi(argv[4]);
    b.minute = atoi(argv[5]);
    b.second = atoi(argv[6]);
    // add the two timestamps
    struct timestamp sum = add_timestamps(a, b);
    // each subsequent value provided replaces specifiers in order
    printf("%d %d %d\n", sum.hour, sum.minute, sum.second);
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --log olivierpierre/comp26020-problems/2021-2022/week2-c-basics/11-struct
