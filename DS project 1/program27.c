#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Declare two character arrays for strings
    int i = 0;

    // Ask the user to enter a string
    printf("Enter a string: ");
    gets(str1); // You can also use fgets() if preferred

    // Copy characters from str1 to str2 manually
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Null-terminate the copied string

    printf("Copied string: %s\n", str2);
    return 0;
}
// This program copies a string from one variable to another without using the strcpy function.