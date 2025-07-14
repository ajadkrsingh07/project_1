#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an array

    int *ptr = arr; // Pointer to first element

    printf("Pointer Arithmetic Example:\n");
    for (int i = 0; i < 5; i++) { // Loop through the array

        printf("Value at arr[%d] = %d, Address = %p\n", i, *(ptr + i), (ptr + i)); // Accessing elements using pointer arithmetic
    }

    return 0;
}
// This program demonstrates pointer arithmetic by accessing array elements using a pointer.