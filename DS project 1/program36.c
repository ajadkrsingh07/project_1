#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) { // Function to sort an array using bubble sort algorithm

    int i, j, temp; // Declare loop variables and a temporary variable for swapping

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap if elements are in wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
// Ensure n does not exceed array size
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n); // Call sorting function

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
// This program implements bubble sort to sort an array of integers.