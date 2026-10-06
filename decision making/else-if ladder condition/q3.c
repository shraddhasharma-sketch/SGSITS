// Q3. Write a C program to classify temperature as Very Hot, Hot, Normal, Cold, or Very Cold.

#include <stdio.h>

int main()
{
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if(temp > 40)
        printf("Very Hot");
    else if(temp >= 30)
        printf("Hot");
    else if(temp >= 20)
        printf("Normal");
    else if(temp >= 10)
        printf("Cold");
    else
        printf("Very Cold");

    return 0;
}