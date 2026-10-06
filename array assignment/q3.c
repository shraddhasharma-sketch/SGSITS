// Q3. Find largest and smallest element of an array

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, smallest;

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
    }

    largest = a[0];
    smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d", smallest);

    return 0;
}