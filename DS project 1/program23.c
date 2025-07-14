#include <stdio.h>

int main() {
    int a[10][10], trans[10][10], r, c, i, j; // Declare matrix and its dimensions

    printf("Enter rows and columns: "); // Prompt user for dimensions
    scanf("%d %d", &r, &c); // Read number of rows and columns

    // Read matrix from user
    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Find transpose (flip rows and columns)
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = a[i][j];

    // Print transpose
    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
// This program finds the transpose of a matrix and prints it.