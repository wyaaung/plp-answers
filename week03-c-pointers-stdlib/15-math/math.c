#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
    printf("Input a number:\n");
    double a;
    scanf("%lf", &a);

    printf("Input 0 for ceil, 1 for floor\n");
    int o;
    scanf("%d", &o);

    float f;
    if (o) {
        f = floor(a);
    }else{
        f = ceil(a);
    }
    
    printf("%lf\n", f);

    return 0;
}