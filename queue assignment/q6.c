// Q6: Queue using two stacks with push and pop operations.
#include <stdio.h>
#define MAX 5

void push(int stack[], int *top, int value)
{
    if (*top == MAX - 1)
        printf("Stack overflow\n");
    else
        stack[++(*top)] = value;
}

int pop(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    int value = stack[*top];
    (*top)--;
    return value;
}

int main(void)
{
    int stack1[MAX], stack2[MAX];
    int top1 = -1, top2 = -1;
    int choice, value, i, count;

    while (1)
    {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 0;
        count = top1 + top2 + 2;

        switch (choice)
        {
            case 1:
                if (count == MAX)
                    printf("Queue overflow\n");
                else
                {
                    printf("Enter value: ");
                    if (scanf("%d", &value) != 1) return 0;
                    push(stack1, &top1, value);
                }
                break;
            case 2:
                if (count == 0)
                    printf("Queue underflow\n");
                else
                {
                    if (top2 == -1)
                    {
                        while (top1 != -1)
                        {
                            value = pop(stack1, &top1);
                            push(stack2, &top2, value);
                        }
                    }
                    printf("Deleted: %d\n", pop(stack2, &top2));
                }
                break;
            case 3:
                if (count == 0)
                    printf("Queue is empty\n");
                else
                {
                    printf("Queue: ");
                    for (i = top2; i >= 0; i--)
                        printf("%d ", stack2[i]);
                    for (i = 0; i <= top1; i++)
                        printf("%d ", stack1[i]);
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