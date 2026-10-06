// Q1. Write a C program using nested if to check whether a number is Positive Even, Positive Odd, or Negative.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
    {
        if(n % 2 == 0)
        {
            printf("Positive Even");
        }
        else
        {
            printf("Positive Odd");
        }
    }
    else
    {
        printf("Negative");
    }

    return 0;
}