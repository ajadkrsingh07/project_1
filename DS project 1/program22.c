#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mult[10][10] = {0}; // Declare matrices and initialize product matrix to zero
    int r1, c1, r2, c2, i, j, k; // Declare dimensions and loop counters

    // Get dimensions of both matrices
    printf("Enter rows and columns for first matrix: "); // Prompt user for dimensions of first matrix

    scanf("%d %d", &r1, &c1); // Read number of rows and columns for first matrix

    printf("Enter rows and columns for second matrix: "); // Prompt user for dimensions of second matrix

    scanf("%d %d", &r2, &c2); // Read number of rows and columns for second matrix

    // Check if multiplication is possible
    if (c1 != r2) { // If columns of first matrix do not match rows of second matrix

        printf("Cannot multiply matrices!\n"); // Print error message if multiplication is not possible
        return 1;
    }

    // Input matrix A
    printf("Enter first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input matrix B
    printf("Enter second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Multiply matrices
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                mult[i][j] += a[i][k] * b[k][j];

    // Output the result
    printf("Product:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }

    return 0;
}
// This program multiplies two matrices and prints the result.