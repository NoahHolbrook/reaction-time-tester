#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){

    srand(time(NULL)); //random
    printf("Welcome to reaction time test!\n");
    printf("press enter to start\n");

    getchar();

    printf("press enter on GO!\n");
    printf("get ready...\n");

    int delay = rand() % 4+2; 

    clock_t start = clock();
  
    while ((double)(clock() - start) / CLOCKS_PER_SEC < delay)  {
    //wait
    }
    printf("GO!");


    clock_t reaction_start = clock();

    getchar();

    clock_t reaction_end = clock();

    double reaction_time = 
        (double)(reaction_end - reaction_start) / CLOCKS_PER_SEC;

    printf("your reaction time is %.3f seconds \n",reaction_time);

    return 0;
}




