#include <stdio.h>

int main() {
    int num; // generating an integer variable to store the number

    printf("Enter a number: "); // asking the user to enter a number

    scanf("%d", &num); // reads a number from the user

    if (num % 2 == 0) // If number is divisible by 2 then it is even

        printf("Even\n"); // prints even if the number is even
    else
        printf("Odd\n"); // prints odd if the number is odd

    return 0;
}
