#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b; 

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Print before swapping
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b); // Pass addresses

    // Print after swapping
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
// This program swaps two numbers using pointers.