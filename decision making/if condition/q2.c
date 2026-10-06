// Q2. Write a C program to input a number and print "Even" if the number is divisible by 2.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Even");
    }

    return 0;
}