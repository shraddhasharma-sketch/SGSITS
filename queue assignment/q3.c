// Q3: Circular queue with enqueue, dequeue, display, count, qempty and qfull.
#include <stdio.h>
#define MAX 5

int main(void)
{
    int q[MAX], front = 0, rear = -1, count = 0;
    int choice, value, i;

    while (1)
    {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Count  5.Qempty  6.Qfull  7.Exit\nChoice: ");
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
                    rear = (rear + 1) % MAX;
                    q[rear] = value;
                    count++;
                }
                break;
            case 2:
                if (count == 0)
                    printf("Queue underflow\n");
                else
                {
                    printf("Deleted: %d\n", q[front]);
                    front = (front + 1) % MAX;
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
                        printf("%d ", q[(front + i) % MAX]);
                    printf("\n");
                }
                break;
            case 4:
                printf("Count: %d\n", count);
                break;
            case 5:
                if (count == 0) printf("Queue is empty\n");
                else printf("Queue is not empty\n");
                break;
            case 6:
                if (count == MAX) printf("Queue is full\n");
                else printf("Queue is not full\n");
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}