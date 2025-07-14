#include <stdio.h>

int main() {
    char op; // Declare operator variable

    float num1, num2;

    // Ask user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Read operator
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2); // Read two numbers

    // Use switch-case to perform operation
    switch(op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
// This program performs basic arithmetic operations based on user input.