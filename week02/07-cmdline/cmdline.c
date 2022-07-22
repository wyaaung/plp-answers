#include <stdio.h>
#include <stdlib.h> //needed for atoi

int main(int argc, char **argv){
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double product = a * b * c;
    printf("%f\n", product);
    return 0;
}
