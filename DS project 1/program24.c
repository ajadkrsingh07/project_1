#include <stdio.h>

int main() {
    int a[100], n, i, pos, val; // Declare array, size, position, and value variables

    printf("Enter size of array: "); 
    scanf("%d", &n); // Read size of array

    // Read array elements
    printf("Enter elements:\n"); 
    for (i = 0; i < n; i++) // Loop to read each element
        scanf("%d", &a[i]); // Read each element into the array

    // Get position and value to insert
    printf("Enter position to insert: ");

    scanf("%d", &pos); // Read position to insert new element
    printf("Enter value to insert: ");
    scanf("%d", &val); // Read value to insert

    // Shift elements to the right
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1]; // Shift elements from position to the right

    a[pos - 1] = val; // Insert new element
    n++; // Increase size

}   
