// Q3: Insert elements and search; return the first position, or -1 if absent.
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

int search(int value)
{
    int position = 1;
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
            return position;
        position++;
        temp = temp->next;
    }
    return -1;
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
        printf("\n1.Insert  2.Search  3.Display  4.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                insertEnd(value);
                break;
            case 2:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                position = search(value);
                if (position == -1)
                    printf("Element not found; position: -1\n");
                else
                    printf("Element found at position: %d\n", position);
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