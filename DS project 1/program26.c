#include <stdio.h>

int main() {
    int a[100], n, i, key, found = 0; // Declare array, size, key to search, and found flag

    printf("Enter size of array: ");
    scanf("%d", &n); // Read size of array

    // Input array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Print the array

    // Ask user what to search
    printf("Enter element to search: ");
    scanf("%d", &key); // Read the element to search for

    // Go through array to find the element
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    // If element wasn't found
    if (!found)
        printf("Element not found in array.\n");

    return 0;
}
// This program searches for an element in an array and prints its position if found.
