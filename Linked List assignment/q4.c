// Q4: Singly linked list with a function to find minimum and maximum.
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

void findMinMax(void)
{
    int minimum, maximum;
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    minimum = maximum = head->data;
    temp = head->next;
    while (temp != NULL)
    {
        if (temp->data < minimum) minimum = temp->data;
        if (temp->data > maximum) maximum = temp->data;
        temp = temp->next;
    }
    printf("Minimum: %d\nMaximum: %d\n", minimum, maximum);
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
        printf("\n1.Insert  2.Find minimum and maximum  3.Display  4.Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) goto finish;
                insertEnd(value);
                break;
            case 2:
                findMinMax();
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