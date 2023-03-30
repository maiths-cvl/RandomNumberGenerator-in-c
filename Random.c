#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    random_number = rand() % 1000 + 1;

    printf("Random number between 1 and 100: %d\n", random_number);

    return 0;
}