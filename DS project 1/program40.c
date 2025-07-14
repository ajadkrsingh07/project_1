#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i; // Declare pointer for dynamic array, number of elements, and loop counter

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Display the elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Free the memory
    free(arr);
    return 0;
}
// This program demonstrates dynamic memory allocation in C using malloc.