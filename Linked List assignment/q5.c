// Q5: Singly linked list: insert at end, insert/delete at position, display.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

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

void insertAtPosition(int value, int position)
{
    int i;
    struct Node *temp, *newNode;
    if (position < 1 || position > countNodes() + 1)
    {
        printf("Invalid position\n");
        return;
    }
    newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        temp = head;
        for (i = 1; i < position - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    printf("Inserted: %d\n", value);
}

void deleteAtPosition(int position)
{
    int i;
    struct Node *temp, *deleted;
    if (head == NULL)
    {
        printf("List underflow\n");
        return;
    }
    if (position < 1 || position > countNodes())
    {
        printf("Invalid position\n");
        return;
    }
    if (position == 1)
    {
        deleted = head;
        head = head->next;
    }
    else
    {
        temp = head;
        for (i = 1; i < position - 1; i++)
            temp = temp->next;
        deleted = temp->next;
        temp->next = deleted->next;
    }
    printf("Deleted: %d\n", deleted->data);
    free(deleted);
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
    int choice, value, position;
    while (1)
    {
        printf("\n1.Insert at end  2.Insert at position  3.Delete at position  4.Display  5.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                insertEnd(value);
                break;
            case 2:
                printf("Enter value and position: ");
                if (scanf("%d %d", &value, &position) != 2) goto finish;
                insertAtPosition(value, position);
                break;
            case 3:
                printf("Enter position: ");
                if (scanf("%d", &position) != 1) goto finish;
                deleteAtPosition(position);
                break;
            case 4:
                display();
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