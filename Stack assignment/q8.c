// Q8. Write a C program to find sum of Fibonacci series using recursion.

#include<stdio.h>

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n, i, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        sum = sum + fib(i);

    printf("Sum = %d", sum);

    return 0;
}