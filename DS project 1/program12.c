#include <stdio.h>

int main() {
    int num, sum = 0, digit; // declaring variables for number, sum of digits, and current digit

    printf("Enter a number: "); // asks user to enter a number

    scanf("%d", &num); // reads a number from the user

    while(num != 0) { // Loop until num becomes 0
        digit = num % 10; // Get last digit
        sum += digit; // Add digit to sum
        num /= 10; // Remove digit
    }

    printf("Sum of digits = %d\n", sum); // prints the sum of digits
    return 0;
}
// This program calculates the sum of the digits of a given number.