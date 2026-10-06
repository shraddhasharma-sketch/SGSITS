// Q4. Write a C program to check whether a number is positive and even using if.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0 && n % 2 == 0)
    {
        printf("Number is positive and even");
    }

    return 0;
}