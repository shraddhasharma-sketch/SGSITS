// Q2: Linear queue with shifting after every deletion.
#include <stdio.h>
#define MAX 5

int main(void)
{
    int q[MAX], rear = -1;
    int choice, value, i;

    while (1)
    {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Peek  5.Count  6.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 0;

        switch (choice)
        {
            case 1:
                if (rear == MAX - 1)
                    printf("Queue overflow\n");
                else
                {
                    printf("Enter value: ");
                    if (scanf("%d", &value) != 1) return 0;
                    q[++rear] = value;
                }
                break;
            case 2:
                if (rear == -1)
                    printf("Queue underflow\n");
                else
                {
                    printf("Deleted: %d\n", q[0]);
                    for (i = 0; i < rear; i++)
                        q[i] = q[i + 1];
                    rear--;
                }
                break;
            case 3:
                if (rear == -1)
                    printf("Queue is empty\n");
                else
                {
                    printf("Queue: ");
                    for (i = 0; i <= rear; i++)
                        printf("%d ", q[i]);
                    printf("\n");
                }
                break;
            case 4:
                if (rear == -1) printf("Queue is empty\n");
                else printf("Front: %d\n", q[0]);
                break;
            case 5:
                printf("Count: %d\n", rear + 1);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}