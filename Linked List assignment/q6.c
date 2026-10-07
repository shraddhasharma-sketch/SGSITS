// Q6: Stack using a singly linked list: push, pop, traverse, and count.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Inserted: %d\n", value);
}

void pop(void)
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("Stack underflow\n");
        return;
    }
    temp = top;
    printf("Deleted: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display(void)
{
    struct Node *temp = top;
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack (top to bottom): ");
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
    struct Node *temp = top;
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
    while (top != NULL)
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n1.Push  2.Pop  3.Traverse  4.Count  5.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                push(value);
                break;
            case 2:
                pop();
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