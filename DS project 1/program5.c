#include <stdio.h>
int main() {
    int a, b; // declares two integer variables

    printf("Enter two numbers: "); // asks user to enter two numbers

    scanf("%d %d", &a, &b);     // Takes input
    
    printf("Largest: %d\n", (a > b) ? a : b); // Uses ternary operator to find max
    return 0;
}