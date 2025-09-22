#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Repeat 10 times
    for (int i = 0; i < 10; i++) {
        // Generate a random number between 0 and 99
        int random_number = rand() % 100;

        // Print the random number
        printf("Random number %d: %d\n", i + 1, random_number);
    }

    return 0;
}