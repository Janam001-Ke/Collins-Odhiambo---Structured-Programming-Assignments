
#include <stdio.h>

int main() {
    char regNo[30];
    char name[50];
    float marks;

    printf("Enter registration number: ");
    scanf("%s", regNo);


    printf("Enter student's name: ");
    scanf(" %[^\n]", name);


    printf("Enter marks (0 - 100): ");
    scanf("%f", &marks);


    if (marks >= 70) {
        printf("\nRegistration No: %s\n", regNo);
        printf("Student Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: A\n");
        printf("Remark: Excellent\n");
    }
    else if (marks >= 60) {
        printf("\nRegistration No: %s\n", regNo);
        printf("Student Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: B\n");
        printf("Remark: Very Good\n");
    }
    else if (marks >= 50) {
        printf("\nRegistration No: %s\n", regNo);
        printf("Student Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: C\n");
        printf("Remark: Good\n");
    }
    else if (marks >= 40) {
        printf("\nRegistration No: %s\n", regNo);
        printf("Student Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: D\n");
        printf("Remark: Needs Improvement\n");
    }
    else {
        printf("\nRegistration No: %s\n", regNo);
        printf("Student Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: E\n");
        printf("Remark: Fail - Work Harder\n");
    }

    return 0;
}



