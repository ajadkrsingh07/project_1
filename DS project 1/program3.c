#include <stdio.h>

int main() {
    float radius, area; // declares float variables for radius and area

    printf("Enter radius: "); // asks user to enter the radius of the circle

    scanf("%f", &radius); // takes input for radius from the user

    area = 3.14 * radius * radius; //area of circle is πr²
    
    printf("Area of circle ", area); //prints the area of circle

    return 0;
}
