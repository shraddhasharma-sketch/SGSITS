// Q3. Write a C program to convert an infix expression into postfix expression using stack.

#include<stdio.h>
#include<ctype.h>

char stack[50];
int top = -1;

int priority(char x)
{
    if(x == '+' || x == '-')
        return 1;

    if(x == '*' || x == '/')
        return 2;

    return 0;
}

int main()
{
    char infix[50], postfix[50];
    int i, j = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        if(isalnum(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
        }

        else if(infix[i] == '(')
        {
            top++;
            stack[top] = infix[i];
        }

        else if(infix[i] == ')')
        {
            while(stack[top] != '(')
            {
                postfix[j] = stack[top];
                j++;
                top--;
            }

            top--;
        }

        else
        {
            while(top != -1 &&
                  priority(stack[top]) >= priority(infix[i]))
            {
                postfix[j] = stack[top];
                j++;
                top--;
            }

            top++;
            stack[top] = infix[i];
        }
    }

    while(top != -1)
    {
        postfix[j] = stack[top];
        j++;
        top--;
    }

    postfix[j] = '\0';

    printf("Postfix = %s", postfix);

    return 0;
}