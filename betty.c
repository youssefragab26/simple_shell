#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;
    
    printf("Random number: %d\n", randomNumber);
    
    return 0;
} 
