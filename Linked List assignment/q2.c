// Q2: Singly linked list: insert and delete at end, display, and count.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int value)
{
    struct Node *temp, *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("Inserted: %d\n", value);
}

void deleteEnd(void)
{
    struct Node *temp, *previous;
    if (head == NULL)
    {
        printf("List underflow\n");
        return;
    }
    if (head->next == NULL)
    {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    temp = head;
    previous = NULL;
    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }
    printf("Deleted: %d\n", temp->data);
    previous->next = NULL;
    free(temp);
}

void display(void)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
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
    struct Node *temp = head;
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
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n1.Insert at end  2.Delete from end  3.Display  4.Count  5.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                insertEnd(value);
                break;
            case 2:
                deleteEnd();
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