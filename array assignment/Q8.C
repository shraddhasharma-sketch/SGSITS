// Q7. Student attendance using 2-D array

#include <stdio.h>

int main()
{
    int a[20][20];
    int n, m, i, j, total;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of classes: ");
    scanf("%d", &m);

    if(n <= 0 || m <= 0 || n > 20 || m > 20)
    {
        printf("Invalid number of students or classes.");
        return 0;
    }

    printf("Enter attendance (1 for Present, 0 for Absent):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] != 0 && a[i][j] != 1)
            {
                printf("Invalid attendance value.");
                return 0;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        total = 0;

        printf("\nStudent %d: ", i + 1);

        for(j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);

            if(a[i][j] == 1)
                total++;
        }

        printf("\nTotal days present = %d\n", total);
    }

    return 0;
}