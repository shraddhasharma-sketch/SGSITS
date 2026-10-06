// Q1. Array of size 10: Insert, Display and Count elements

#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 10)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nNumber of elements = %d", n);

    return 0;
}