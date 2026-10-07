//Q4.Write a program using a for loop to calculate the sum of numbers from 1 to n
#include <stdio.h>
int main()

{
    int i, n, sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}