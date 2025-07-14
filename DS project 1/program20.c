#include <stdio.h>

int main() {
    int n, i, j, temp; // Declare variables for size, loop counters, and a temporary variable

    printf("Enter size of array: ");
    scanf("%d", &n); // Read the size of the array

    int arr[n]; // Declare an array of size n

    // Read elements from user
    printf("Enter elements:\n"); // Prompt user to enter elements of the array

    for (i = 0; i < n; i++) // Loop to read each element

        scanf("%d", &arr[i]); // Read each element into the array

    // Simple bubble sort
    for (i = 0; i < n - 1; i++) { // Loop through each element

        for (j = i + 1; j < n; j++) { // Compare with subsequent elements

            if (arr[i] > arr[j]) { // If current element is greater than the next one
                // Swap if out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n"); // Print header for sorted array

    for (i = 0; i < n; i++) // Loop to print each element

        printf("%d ", arr[i]); // Print each element of the sorted array
    printf("\n");
    return 0;
}
// This program sorts an array using a simple bubble sort algorithm.