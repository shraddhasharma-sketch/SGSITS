// Q5. Read and display a two-dimensional array

#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

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

    printf("Array is:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}