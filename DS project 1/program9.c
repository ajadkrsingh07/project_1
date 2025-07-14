#include <stdio.h>

int main() {
    int num, i; // Declare variables for number and loop counter

    printf("Enter a number: "); // Prompt user for input
    
    scanf("%d", &num); // scanf function reads input from the user

    for(i = 1; i <= 10; ++i) // Loop from 1 to 10
    
        printf("%d x %d = %d\n", num, i, num * i); // Print multiplication line

    return 0;
}
// This program prints the multiplication table of a given number.