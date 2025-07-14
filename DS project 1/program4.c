#include <stdio.h>

int main() {
    int a, b, temp; // generating two integer variables and a temporary variable

    printf("Enter two numbers: "); // asks user to enter two numbers

    scanf("%d %d", &a, &b); // takes input for a and b
    temp = a; // entering value of a into temp

    a = b; // enteribng value of b into a

    b = temp; // entering value of temp into b
    printf("After swap a = %d, b = %d\n", a, b); // prints the swapped values
    return 0;
}
