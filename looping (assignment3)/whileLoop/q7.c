//Q7. Write a program using a while loop to check whether a number is a palindrome.
#include <stdio.h>
int main()
{
    int num, rever = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int or = num;
    while (num != 0)
    {
        int digit = num%10;
        rever = rever * 10 + digit ;
        num = num / 10;
    }
    if (rever == or)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}