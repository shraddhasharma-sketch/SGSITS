// Q4. Write a C program to check whether a number is zero or non-zero.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non-zero");
    }

    return 0;
}