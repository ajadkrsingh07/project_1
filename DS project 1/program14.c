#include <stdio.h>

int main() {
    char ch; //ch declares a character variable

    printf("Enter a character: "); //
    scanf(" %c", &ch); // Read character (space handles leftover newline)

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if character is an alphabet
        // Check for vowels
        switch(ch) { // Switch case to check character

            case 'a': case 'e': case 'i': case 'o': case 'u': // Lowercase vowels
            case 'A': case 'E': case 'I': case 'O': case 'U': // Uppercase vowels

                printf("Vowel\n"); // print vowel if character is vowel
                break;
            default:
                printf("Consonant\n"); // print consonant if character is consonant
        }
    } else {
        printf("Not an alphabet\n"); // If not a letter
    }

    return 0;
}
// This program checks if a character is a vowel, consonant, or not an alphabet.