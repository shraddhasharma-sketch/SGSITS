// Q5. Write a C program using switch-case to display grade description: A-Excellent, B-Very Good, C-Good, D-Average, F-Fail.

#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case 'A':
        case 'a':
            printf("Excellent");
            break;

        case 'B':
        case 'b':
            printf("Very Good");
            break;

        case 'C':
        case 'c':
            printf("Good");
            break;

        case 'D':
        case 'd':
            printf("Average");
            break;

        case 'F':
        case 'f':
            printf("Fail");
            break;

        default:
            printf("Invalid grade");
    }

    return 0;
}