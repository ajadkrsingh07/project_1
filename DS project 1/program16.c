#include <stdio.h>

int main() {
    int a, b, temp, gcd, lcm; // Declare variables for two numbers, temporary storage, GCD, and LCM

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b); // Read the two numbers from user input

    int x = a, y = b; // Store original values for LCM calculation

    // Use Euclidean algorithm to find GCD
    while (b != 0) {
        temp = b; //
        b = a % b;
        a = temp;
    }

    gcd = a; // After the loop, 'a' contains the GCD

    lcm = (x * y) / gcd; // LCM formula using GCD

    printf("GCD: %d\nLCM: %d\n", gcd, lcm); // Print the results
    return 0;
}
// This program calculates the GCD and LCM of two numbers using the Euclidean algorithm for GCD.