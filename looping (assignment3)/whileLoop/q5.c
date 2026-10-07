//Q5. Write a program using a while loop to find the sum of digits of anumber.
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("The sum of digits is: %d\n", sum);
    return 0;
}