#include <stdio.h>
#include <stdlib.h>

struct timestamp{
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

struct timestamp add_timestamps(struct timestamp a, struct timestamp b){
    struct timestamp sum;
    sum.second = a.second + b.second;
    sum.minute = a.minute + b.minute;
    sum.hour = a.hour + b.hour;
    if(sum.second > 59){
        sum.minute++;
        sum.second -= 60;
    }
    if(sum.minute > 59){
        sum.hour++;
        sum.minute -= 60;
    }
    return sum;
}

int main(int argc, char **argv){
    struct timestamp a;
    struct timestamp b;
    a.hour = atoi(argv[1]);
    a.minute = atoi(argv[2]);
    a.second = atoi(argv[3]);
    b.hour = atoi(argv[4]);
    b.minute = atoi(argv[5]);
    b.second = atoi(argv[6]);
    struct timestamp sum = add_timestamps(a, b);
    printf("%d %d %d\n", sum.hour, sum.minute, sum.second);
    return 0;
}
