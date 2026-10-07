// Q5: Ascending priority queue using structures; lowest priority number is deleted first.
#include <stdio.h>
#define MAX 5

struct Element
{
    int data;
    int priority;
};

int main(void)
{
    struct Element q[MAX], item;
    int count = 0, choice, i;

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
                    printf("Enter data and priority: ");
                    if (scanf("%d %d", &item.data, &item.priority) != 2) return 0;
                    i = count - 1;
                    while (i >= 0 && q[i].priority > item.priority)
                    {
                        q[i + 1] = q[i];
                        i--;
                    }
                    q[i + 1] = item;
                    count++;
                }
                break;
            case 2:
                if (count == 0)
                    printf("Queue underflow\n");
                else
                {
                    printf("Deleted data: %d, Priority: %d\n", q[0].data, q[0].priority);
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
                    printf("Data\tPriority\n");
                    for (i = 0; i < count; i++)
                        printf("%d\t%d\n", q[i].data, q[i].priority);
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}