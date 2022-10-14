#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SAMPLE_SIZE 10
#define MAX_VAL 50

/* Fill the array referenced by ptr with random integers with values between
 * 0 and 99 */
void fill_array(int *ptr, int size) {
    srand(time(NULL));
    for(int i = 0; i<size; i++)
        ptr[i] = rand()%100;
}

int main(int argc, char **argv) {
    int bins[5] = {0, 0, 0, 0, 0};

    int *array = malloc(SAMPLE_SIZE * sizeof(int));
    if(!array) {
        perror("malloc");
        return -1;
    }

    fill_array(array, SAMPLE_SIZE);

    /* Iterate over the array and accordign to the value of each element,
     * increment the corresponding bin counter */
    for(int i=0; i<SAMPLE_SIZE; i++) {
        int n = array[i];

        if(n < MAX_VAL/5)
            bins[0]++;
        else if(n >= MAX_VAL/5 && n < (MAX_VAL/5)*2)
            bins[1]++;
        else if(n >= (MAX_VAL/5)*2 && n < (MAX_VAL/5)*3)
            bins[2]++;
        else if(n >= (MAX_VAL/5)*3 && n < (MAX_VAL/5)*4)
            bins[3]++;
        else
            bins[4]++;
    }

    for(int i=0; i<5; i++) {
        printf("bin %d: [%03d - %03d[ ", i, (MAX_VAL/5)*i, (MAX_VAL/5)*(i+1));
        for(int j=0; j<(bins[i]*MAX_VAL)/SAMPLE_SIZE; j++)
            printf("*");
        printf("\n");
    }

    free(array);
    return 0;
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week5-compilation/01-macro