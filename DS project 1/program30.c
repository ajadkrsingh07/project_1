#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i = 0; // Initialize counters and index

    // Take string input
    printf("Enter a string: ");
    gets(str);

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];
        // Check if character is a letter

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++; // It's a number
        } else if (ch == ' ') {
            spaces++; // Count spaces
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}
// This program counts the number of vowels, consonants, digits, and spaces in a given string.