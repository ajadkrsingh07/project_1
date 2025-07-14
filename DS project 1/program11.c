#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Assume number is prime initially

    printf("Enter a number: "); 
    scanf("%d", &num); // Take input

    if (num <= 1) // Check if number is less than or equal to 1

        isPrime = 0; // Numbers <= 1 are not prime

    for(i = 2; i <= num / 2; ++i) { // Loop from 2 to num/2

        if (num % i == 0) { // If divisible by any number

            isPrime = 0; // Set isPrime to 0

            break; // break is used to exit the loop if a divisor is found
        }
    }

    if(isPrime)
        printf("Prime\n"); // Print if number is prime
    else
        printf("Not prime\n"); // Print if number is not prime

    return 0;
}
// This program checks if a given number is prime or not.