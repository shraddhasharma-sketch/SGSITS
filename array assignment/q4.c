// Q4. Insert an element at a specified position

#include <stdio.h>

int main()
{
    int a[100], n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n >= 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    if(position < 1 || position > n + 1)
    {
        printf("Invalid position.");
        return 0;
    }

    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}