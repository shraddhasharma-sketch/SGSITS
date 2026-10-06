// C program to find the largest of two numbers using conditional operator
#include <stdio.h>

int main()
{
    int a, b, largest;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    largest = (a > b) ? a : b;

    printf("Largest = %d", largest);

    return 0;
}