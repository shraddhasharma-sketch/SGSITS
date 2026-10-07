//Q4.Write a program using a while loop to count the number of digits in a given number.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits is: %d\n", count);
    return 0;
}