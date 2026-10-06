// c program to find factorial of a number using recursion
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int factorial(int n);

    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * factorial(n - 1);
        }
    }
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}
