// Q2. Find sum and average of array elements

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}