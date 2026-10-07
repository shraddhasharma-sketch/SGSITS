// Q8: Circular singly linked list: insert at end, delete at end, display.
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
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
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
    if (head->next == head)
    {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    previous = head;
    temp = head->next;
    while (temp->next != head)
    {
        previous = temp;
        temp = temp->next;
    }
    printf("Deleted: %d\n", temp->data);
    previous->next = head;
    free(temp);
}

void display(void)
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    printf("List: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void freeList(void)
{
    struct Node *temp, *nextNode;
    if (head == NULL) return;
    temp = head->next;
    while (temp != head)
    {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    free(head);
    head = NULL;
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n1.Insert at end  2.Delete from end  3.Display  4.Exit\nChoice: ");
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
                goto finish;
            default:
                printf("Invalid choice\n");
        }
    }
finish:
    freeList();
    return 0;
}