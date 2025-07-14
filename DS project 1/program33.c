#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0; // First term
    if (n == 1) return 1; // Second term
    return fibonacci(n - 1) + fibonacci(n - 2); // Sum of two previous terms
}

int main() {
    int n;

// Ask user for the position of Fibonacci number
    printf("Enter the position (n) to find Fibonacci number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Invalid input.\n"); // Fibonacci is not defined for negative numbers
    else
        printf("Fibonacci number at position %d is %d\n", n, fibonacci(n)); // Print the nth Fibonacci number

    return 0;
}
// This program calculates the nth Fibonacci number using recursion.