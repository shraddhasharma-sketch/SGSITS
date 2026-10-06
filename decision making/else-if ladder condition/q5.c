// Q5. Write a C program to classify electricity usage as Low, Medium, High, or Very High based on units consumed.

#include <stdio.h>

int main()
{
    int units;

    printf("Enter units: ");
    scanf("%d", &units);

    if(units <= 100)
        printf("Low usage");
    else if(units <= 200)
        printf("Medium usage");
    else if(units <= 300)
        printf("High usage");
    else
        printf("Very high usage");

    return 0;
}