// Q10: Doubly linked list: insert/delete at end, forward/backward traversal.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL, *tail = NULL;

void insertEnd(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed (overflow)\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = tail;
    if (tail == NULL)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    printf("Inserted: %d\n", value);
}

void deleteEnd(void)
{
    struct Node *temp;
    if (tail == NULL)
    {
        printf("List underflow\n");
        return;
    }
    temp = tail;
    printf("Deleted: %d\n", temp->data);
    tail = tail->prev;
    if (tail == NULL)
        head = NULL;
    else
        tail->next = NULL;
    free(temp);
}

void displayForward(void)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayBackward(void)
{
    struct Node *temp = tail;
    if (tail == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Backward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
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
    tail = NULL;
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n1.Insert at end  2.Delete from end  3.Forward traversal  4.Backward traversal  5.Exit\nChoice: ");
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
                displayForward();
                break;
            case 4:
                displayBackward();
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