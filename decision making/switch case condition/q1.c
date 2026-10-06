// Q1. Write a C program using switch-case to input a number from 1 to 7 and display the corresponding day of the week.

#include <stdio.h>

int main()
{
    int day;

    printf("Enter number from 1 to 7: ");
    scanf("%d", &day);

    switch(day)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid number");
    }

    return 0;
}