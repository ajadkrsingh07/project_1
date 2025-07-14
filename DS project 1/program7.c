#include <stdio.h>

int main() {
    int year; // Declares an integer variable to store the year
    printf("Enter a year: ");
    scanf("%d", &year); // It will Read the year

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Checks if the year is a leap year

        printf("Leap year\n"); // Prints "Leap year" if the condition is true

    else
        printf("Not a leap year\n"); // Prints "Not a leap year" if the condition is false

    return 0;
}
// This program checks if a given year is a leap year or not.