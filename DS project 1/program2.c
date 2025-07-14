#include <stdio.h>
int main() {
    int a, b;                   // Declares two integer variables

    printf("Enter two numbers: "); //prints Enter two numbers

    scanf("%d %d", &a, &b);     // Takes input for a and b
    
    printf("Sum: %d\n", a + b); // Calculates and prints the sum
    return 0;
}