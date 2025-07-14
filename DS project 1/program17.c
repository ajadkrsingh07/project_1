#include <stdio.h>

int main() {
    int n, count = 0; // Declare variables for the number and digit count

    printf("Enter an integer: "); // Prompt user for input

    scanf("%d", &n); // Read the integer from user input

    // If number is 0, it still has one digit
    if (n == 0) count = 1;

    // Keep dividing by 10 to count digits
    while (n != 0) {
        n /= 10; // Remove the last digit

        count++; // Increment the count of digits
    }

    printf("Number of digits: %d\n", count); // Print the count of digits
    return 0;
}
// This program counts the number of digits in an integer.