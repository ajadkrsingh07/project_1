#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j; // Declare matrices and their dimensions

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c); // Read number of rows and columns

    // Read first matrix
    printf("Enter first matrix:\n"); // Prompt user to enter first matrix

    for (i = 0; i < r; i++) // Loop through each row

        for (j = 0; j < c; j++) // Loop through each column

            scanf("%d", &a[i][j]); // Read each element of the first matrix

    // Read second matrix
    printf("Enter second matrix:\n");

    for (i = 0; i < r; i++) // Loop through each row

        for (j = 0; j < c; j++) // Loop through each column

            scanf("%d", &b[i][j]); // Read each element of the second matrix

    // Add both matrices
    printf("Sum:\n");
    for (i = 0; i < r; i++) { // Loop through each row

        for (j = 0; j < c; j++) { // Loop through each column
            sum[i][j] = a[i][j] + b[i][j]; // Add corresponding elements
            printf("%d ", sum[i][j]); // Print the sum of the elements
        }
        printf("\n");
    }

    return 0;
}
// This program adds two matrices of size r x c and prints the result.