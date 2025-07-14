#include <stdio.h>

// Define a structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input student data
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter name: ");
    scanf(" %[^\n]", s.name); // Read string with spaces
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student data
    printf("\nStudent Information:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
// This program defines a structure for student information and allows input and display of student data.