// Q3. Write a C program to input cost price and selling price and print whether there is a profit or loss.

#include <stdio.h>

int main()
{
    float cp, sp;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if(sp > cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }

    return 0;
}