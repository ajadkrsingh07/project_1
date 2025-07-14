#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Get string input
    printf("Enter a string: ");
    gets(str); // Note: gets is outdated, consider using fgets

    // Count characters until null character '\0'
    while (str[length] != '\0') { // Loop through each character
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
// This program calculates the length of a string without using the strlen function.