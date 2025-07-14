#include <stdio.h>

int main() {
    int n, i; // Declare variables for number of terms and loop counter

    int t1 = 0, t2 = 1, nextTerm; // Initialize first two terms of Fibonacci series

    printf("Enter number of terms: "); // Prompt user for input
    scanf("%d", &n); // Read the number of terms from user

    printf("Fibonacci Series: "); // Print the series header

    for (i = 1; i <= n; ++i) { // Loop to generate Fibonacci series
        printf("%d ", t1); // Print current term
        nextTerm = t1 + t2; // Calculate next term
        t1 = t2; // Move forward
        t2 = nextTerm; // Update t2 to next term
    }

    printf("\n"); // prints a new line after the series
    return 0;
}
// This program prints the Fibonacci series up to n terms.