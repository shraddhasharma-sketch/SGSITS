// Q3. Write a C program using nested if to check exam eligibility based on 75% attendance and then check pass or fail based on marks.

#include <stdio.h>

int main()
{
    float attendance;
    int marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(attendance >= 75)
    {
        printf("Eligible for exam\n");

        if(marks >= 40)
        {
            printf("Student Passed");
        }
        else
        {
            printf("Student Failed");
        }
    }
    else
    {
        printf("Not eligible for exam");
    }

    return 0;
}