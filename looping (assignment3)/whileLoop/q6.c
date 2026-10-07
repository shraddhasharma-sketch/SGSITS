//Q6. Write a program using a while loop to reverse a given number.
#include <stdio.h>
int main()
{
    int num, rever = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rever = rever * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number is: %d\n", rever);
    return 0;
}