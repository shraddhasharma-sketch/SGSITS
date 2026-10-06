// Q4. Write a C program to evaluate a postfix expression using stack.

#include<stdio.h>
#include<ctype.h>

int stack[50];
int top = -1;

int main()
{
    char exp[50];
    int i, a, b;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(isdigit(exp[i]))
        {
            top++;
            stack[top] = exp[i] - '0';
        }
        else
        {
            b = stack[top];
            top--;

            a = stack[top];
            top--;

            if(exp[i] == '+')
                stack[++top] = a + b;

            else if(exp[i] == '-')
                stack[++top] = a - b;

            else if(exp[i] == '*')
                stack[++top] = a * b;

            else if(exp[i] == '/')
                stack[++top] = a / b;
        }
    }

    printf("Result = %d", stack[top]);

    return 0;
}