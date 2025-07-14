#include <stdio.h>

int main() {
    int num, rev = 0, digit; // Declare variables for number, reversed number, and digit

    printf("Enter a number: "); // asks user to enter a number

    scanf("%d", &num); // Input a number

    while(num != 0) {
        // Loop until num becomes 0

        digit = num % 10; // Get the last digit

        rev = rev * 10 + digit; // Append digit to reverse

        num /= 10; // Remove last digit from number
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
// This program reverses a given number.
