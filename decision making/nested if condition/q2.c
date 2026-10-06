// Q2. Write a C program using nested if to find the largest among three numbers.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("%d is largest", a);
        else
            printf("%d is largest", c);
    }
    else
    {
        if(b > c)
            printf("%d is largest", b);
        else
            printf("%d is largest", c);
    }

    return 0;
}