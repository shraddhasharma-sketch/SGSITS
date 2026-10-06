// Q6. Search an element using Linear Search

#include <stdio.h>

int main()
{
    int a[100], n, i, element;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(a[i] == element)
        {
            printf("Element found at position %d.", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found.");
    }

    return 0;
}