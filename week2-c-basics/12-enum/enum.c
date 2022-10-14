// below comments highlight changes made to the provided code
#include <stdio.h>

// new enum - each item represents a number from 0~6
enum day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};


int main(int argc, char **argv) {
    // we use the type 'enum day'
    // so 'WEDNESDAY' automatically gets matched to '2'
    enum day d = WEDNESDAY;

    printf("Today is: ");
    switch(d) {
        // similarly to above, we convert each integer value with matching enum values
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;

        default:
            printf("Unknown day...\n");
    }
    return 0;
}
// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week2-c-basics/12-enum
