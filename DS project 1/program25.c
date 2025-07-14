#include <stdio.h>

int main() {
    int a[100], n, i, pos; // Declare array, size, and position variables

    printf("Enter size of array: ");
    scanf("%d", &n); // Read size of array

    // Read elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]); // Read each element into the array

    // Get position to delete
    printf("Enter position to delete: ");
    scanf("%d", &pos); // Read position to delete element

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++) // Start from position and shift left
        a[i] = a[i + 1];

    n--; // Decrease array size

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
// This program deletes an element from a specified position in an array and prints the updated array.