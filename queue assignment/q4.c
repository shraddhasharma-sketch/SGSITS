// Q4: Descending priority queue; the highest integer is deleted first.
#include <stdio.h>
#define MAX 5

int main(void)
{
    int q[MAX], count = 0;
    int choice, value, i;

    while (1)
    {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 0;

        switch (choice)
        {
            case 1:
                if (count == MAX)
                    printf("Queue overflow\n");
                else
                {
                    printf("Enter value: ");
                    if (scanf("%d", &value) != 1) return 0;
                    i = count - 1;
                    while (i >= 0 && q[i] < value)
                    {
                        q[i + 1] = q[i];
                        i--;
                    }
                    q[i + 1] = value;
                    count++;
                }
                break;
            case 2:
                if (count == 0)
                    printf("Queue underflow\n");
                else
                {
                    printf("Deleted: %d\n", q[0]);
                    for (i = 0; i < count - 1; i++)
                        q[i] = q[i + 1];
                    count--;
                }
                break;
            case 3:
                if (count == 0)
                    printf("Queue is empty\n");
                else
                {
                    printf("Queue: ");
                    for (i = 0; i < count; i++)
                        printf("%d ", q[i]);
                    printf("\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}