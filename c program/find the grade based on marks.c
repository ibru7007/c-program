#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks from the user
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    // Determine the grade based on marks
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else if (marks >= 0) {
        grade = 'F';
    } else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }

    // Output the grade
    printf("Your grade is: %c\n", grade);

    return 0; // Exit the program successfully
}

