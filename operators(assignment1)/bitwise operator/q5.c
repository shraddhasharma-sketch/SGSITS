// C program to division of number 2 by using right shift operator
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    n = n >> 1;

    printf("Result = %d", n);

    return 0;
}