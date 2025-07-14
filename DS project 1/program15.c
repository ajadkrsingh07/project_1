#include <stdio.h>

int main() {
    float celsius, fahrenheit; // Declare float variables for Celsius and Fahrenheit temperatures

    printf("Enter temperature in Celsius: "); // Prompt user for input

    scanf("%f", &celsius); // Read Celsius temperature

    fahrenheit = (celsius * 9 / 5) + 32; // Convert using formula

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit); // Show result
    return 0;
}
// This program converts Celsius to Fahrenheit.