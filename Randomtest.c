#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>


void RandOne(){
    int random_number;

    long n = 1680216589;

    // Seed the random number generator with the current time
    srand(time(NULL));

    fprintf(stdout, "%lu\n", (unsigned long)time(NULL)); 

    // Generate a random number between 1 and 100
    for(int i = 0; i<10; i++) {
        random_number = rand() % 100 + 1;
        printf("Random number between 1 and 100: %d\n", random_number);
    }
}

int RandTwo(){

    long randN;

    srand(time(NULL));
    
    for(int i = 0; i<10; i++) {
        randN = rand() % 100 + 1;
        srand(randN);
        printf("%d\n", randN);
        
    }

    return 1;
}


int main() {
/*
    bool run = true;

    while(run == true){
        RandTwo();
        if(RandTwo() == 1){
            run = false;
        }
    }
*/

    RandTwo();
    return 0;
}