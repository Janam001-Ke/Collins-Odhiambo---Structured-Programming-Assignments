#include <stdio.h>
#include <stdlib.h>


int main() {
    char name[50];
    char regNo[30];
    float marks;
    char grade;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter registration number: ");
    scanf("%s", regNo);

    printf("Enter marks: ");
    scanf("%f", &marks);


    if (marks >= 70)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'F';


    switch (grade) {
        case 'A':
            printf("\nGrade: A");
            printf("\nComment: Excellent!");
            break;

        case 'B':
            printf("\nGrade: B");
            printf("\nComment: Very Good!");
            break;

        case 'C':
            printf("\nGrade: C");
            printf("\nComment: Good!");
            break;

        case 'D':
            printf("\nGrade: D");
            printf("\nComment: Fair. You can improve.");
            break;

        case 'F':
            printf("\nGrade: F");
            printf("\nComment: Fail. More effort is needed.");
            break;

        default:
            printf("\nInvalid grade.");
    }

    printf("\n\nStudent Name: %s", name);
    printf("\nRegistration Number: %s", regNo);
    printf("\nMarks: %.2f", marks);
    printf("\nGrade: %c\n", grade);

    return 0;
}

