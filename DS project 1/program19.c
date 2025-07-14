#include <stdio.h>

int main() {
    int n, i, max; // Declare variables for size, loop counter, and maximum element

    printf("Enter size of array: "); // Prompt user for the size of the array

    scanf("%d", &n); // Read the size of the array

    int arr[n];

    // Get array elements from the user
    printf("Enter elements:\n");

    for (i = 0; i < n; i++) // Loop to read each element
        scanf("%d", &arr[i]); // Read each element into the array

    // Assume the first element is the largest for now
    max = arr[0];

    // Compare with other elements
    for (i = 1; i < n; i++) { // Start from the second element

        if (arr[i] > max) // If current element is greater than max
            max = arr[i]; // Update max to current element
    }

    printf("Largest element: %d\n", max); // Print the largest element found in the array
    return 0;
}
// This program finds the largest element in an array.