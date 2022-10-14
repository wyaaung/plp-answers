#include <stdio.h>
#include <stdlib.h>

int array[1000];

int main(int argc, char **argv) {
    int x;

	for(int i = 0; i < 1000; i++){
        int ran_num = rand()% 1000;
		array[i] = ran_num;
	}

	printf("Please enter an integer between 0 and 9999: ");
	scanf("%d", &x);

    printf("array[%d] = %d\n", x, array[x]);
}

// Run the below command to check answers; The one on github is outdated
// Make sure you're in the same directory as this file when running the command
// check50 -l --ansi-log olivierpierre/comp26020-problems/2022-2023/week5-compilation/08-bug
