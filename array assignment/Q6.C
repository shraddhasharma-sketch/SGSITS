// Q6. Menu driven program for two-dimensional array

#include <stdio.h>

int main()
{
    int a[10][10], m, n;
    int i, j, choice;
    int sum = 0, smallest, largest;
    float average;

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

    printf("\n1. Display Sum");
    printf("\n2. Display Average");
    printf("\n3. Display Smallest");
    printf("\n4. Display Largest");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    sum = 0;
    smallest = a[0][0];
    largest = a[0][0];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum = sum + a[i][j];

            if(a[i][j] < smallest)
                smallest = a[i][j];

            if(a[i][j] > largest)
                largest = a[i][j];
        }
    }

    switch(choice)
    {
        case 1:
            printf("Sum = %d", sum);
            break;

        case 2:
            average = (float)sum / (m * n);
            printf("Average = %.2f", average);
            break;

        case 3:
            printf("Smallest = %d", smallest);
            break;

        case 4:
            printf("Largest = %d", largest);
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}