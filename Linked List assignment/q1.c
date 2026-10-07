// Q1: Singly linked list: insert and delete at beginning, and display.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBegin(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted: %d\n", value);
}

void deleteBegin(void)
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List underflow\n");
        return;
    }
    temp = head;
    printf("Deleted: %d\n", temp->data);
    head = head->next;
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
        printf("\n1.Insert at beginning  2.Delete from beginning  3.Display  4.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                insertBegin(value);
                break;
            case 2:
                deleteBegin();
                break;
            case 3:
                display();
                break;
            case 4:
                goto finish;
            default:
                printf("Invalid choice\n");
        }
    }
finish:
    freeList();
    return 0;
}