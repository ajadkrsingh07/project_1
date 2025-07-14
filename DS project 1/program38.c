#include <stdio.h>

int main() {
    FILE *fptr; // File pointer for file operations

    char name[50];
    int age;

    // Write to a file
    fptr = fopen("data.txt", "w"); // Open file in write mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);

    // Read from the file
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\nReading from file:\n");
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);

    return 0;
}
// This program demonstrates file handling in C by writing user input to a file and then reading from it.