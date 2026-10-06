// Read the elements of an array A of size 5. Push all even elements of the array into the stack and pop all the elements from the stack and display them. Display the original array A.one by one and push onto stack only if the numbers are even otherwise discard the number and

#include <stdio.h>
#define MAX 5
int main()
{
    int stack[MAX];
    int top = -1;
    int i;
    int a[5];
    printf("Enter 5 elements of the array: ");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even \n", a[i]);
            top++;
            stack[top] = a[i];
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }
    printf("The elements in the stack are:");
    while (top >= 0)
    {
        printf("%d ", stack[top]);
        top--;
    }
   
    printf("\nThe original array is: ");
    
    for (i = 0; i < MAX; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}