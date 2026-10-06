// Q1. Write a C program to input a number and check whether it is positive or negative.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n >= 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}