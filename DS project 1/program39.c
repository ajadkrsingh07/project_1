#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3; // File pointers for file operations
    char ch;

    // Open first file
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("merged.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Copy contents of file1
    while ((ch = fgetc(file1)) != EOF)
        fputc(ch, file3);

    // Copy contents of file2
    while ((ch = fgetc(file2)) != EOF)
        fputc(ch, file3);

    printf("Files merged into merged.txt successfully.\n");

    fclose(file1);
    fclose(file2); 
    fclose(file3);

    return 0;
}
// This program merges the contents of two files into a third file.