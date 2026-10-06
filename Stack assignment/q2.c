// Q2. Write a C program to check whether parentheses in an expression are balanced using stack.

#include<stdio.h>

int main()
{
    char exp[50], stack[50];
    int top = -1, i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
        {
            top++;
            stack[top] = '(';
        }

        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                printf("Not Balanced");
                return 0;
            }

            top--;
        }
    }

    if(top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}