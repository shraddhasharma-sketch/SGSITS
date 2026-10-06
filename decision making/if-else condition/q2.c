// Q2. Write a C program to input marks and print "Pass" if marks are 40 or above, otherwise print "Fail".

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}