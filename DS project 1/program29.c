#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to hold the string
    int i = 0, j, isPalindrome = 1;

    // Read string from user
    printf("Enter a string: ");
    gets(str); // Note: gets is unsafe, consider using fgets for better safety

    // First find the length
    while (str[i] != '\0') {
        i++;
    }

    j = i - 1; // Last index of string
    i = 0;     // Reset i to compare from beginning

    // Compare from both ends
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
// This program checks if a given string is a palindrome or not.