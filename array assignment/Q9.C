// Q8. Search an element in a two-dimensional array

#include <stdio.h>

int main()
{
    int a[10][10];
    int m, n, i, j, element;
    int count = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    if(m <= 0 || n <= 0 || m > 10 || n > 10)
    {
        printf("Invalid matrix size.");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] == element)
            {
                printf("Found at row %d, column %d\n",
                       i + 1, j + 1);

                count++;
            }
        }
    }

    if(count == 0)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Total occurrences = %d", count);
    }

    return 0;
}