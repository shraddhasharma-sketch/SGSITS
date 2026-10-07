//Q3.Write a program using a while loop to calculate the sum of all evennumbers from 1 to N.
#include <stdio.h>
int main() 

{
    int N, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum= sum+ i;
        }
        i++;
    }
    printf("The sum of all even numbers from 1 to %d is: %d\n", N, sum);
    return 0;
}