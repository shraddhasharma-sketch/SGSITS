//Q8. Write a program using a while loop to check whether a given number is an Armstrong number.
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + (remainder * remainder * remainder);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}