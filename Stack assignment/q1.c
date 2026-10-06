// Q1. Write a C program to implement stack using array with Push, Pop, Peek, Display and Count operations.

#include<stdio.h>

int stack[5];
int top = -1;

int main()
{
    int ch, x, i;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Count");
        printf("\n6.Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            if(top == 4)
                printf("Stack Overflow");
            else
            {
                printf("Enter element: ");
                scanf("%d", &x);
                top++;
                stack[top] = x;
            }
        }

        else if(ch == 2)
        {
            if(top == -1)
                printf("Stack Underflow");
            else
            {
                printf("Deleted element = %d", stack[top]);
                top--;
            }
        }

        else if(ch == 3)
        {
            if(top == -1)
                printf("Stack is empty");
            else
                printf("Top element = %d", stack[top]);
        }

        else if(ch == 4)
        {
            if(top == -1)
                printf("Stack is empty");
            else
            {
                for(i = top; i >= 0; i--)
                    printf("%d ", stack[i]);
            }
        }

        else if(ch == 5)
        {
            printf("Total elements = %d", top + 1);
        }

        else if(ch == 6)
        {
            break;
        }
    }

    return 0;
}