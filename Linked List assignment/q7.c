// Q7: Queue using a singly linked list: enqueue, dequeue, traverse, count.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted: %d\n", value);
}

void dequeue(void)
{
    struct Node *temp;
    if (front == NULL)
    {
        printf("Queue underflow\n");
        return;
    }
    temp = front;
    printf("Deleted: %d\n", temp->data);
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
}

void display(void)
{
    struct Node *temp = front;
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int countNodes(void)
{
    int count = 0;
    struct Node *temp = front;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void freeList(void)
{
    struct Node *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        free(temp);
    }
    rear = NULL;
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n1.Enqueue  2.Dequeue  3.Traverse  4.Count  5.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Count: %d\n", countNodes());
                break;
            case 5:
                goto finish;
            default:
                printf("Invalid choice\n");
        }
    }
finish:
    freeList();
    return 0;
}