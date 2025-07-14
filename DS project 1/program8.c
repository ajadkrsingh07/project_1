#include <stdio.h>

int main() {
    int n, i; // Declaring variables for number and loop counter

    // Using unsigned long long to handle larger factorials
    unsigned long long fact = 1;

    printf("Enter a number: "); // Prompt user for input

    scanf("%d", &n); // Read the input number

    for(i = 1; i <= n; ++i) // Loop from 1 to n
    
        fact *= i; // Multiply and store in fact

    printf("Factorial = %llu\n", fact); // Show result
    return 0;
}
