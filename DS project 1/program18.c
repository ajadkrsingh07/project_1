#include <stdio.h>

int main() { 

    int i, j; // Declare loop counters

    printf("Prime numbers between 1 and 100:\n"); // Print header

    // Loop through numbers from 2 to 100
    for (i = 2; i <= 100; i++) { // Start from 2, as 1 is not prime

        int isPrime = 1; 

        // Check if 'i' is divisible by any number from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If still marked as prime, print it
        if (isPrime)
            printf("%d ", i); // Print the prime number
    }

    printf("\n");
    return 0;
}
// This program prints all prime numbers between 1 and 100.