// Q4. Write a C program to display age category: 0-12 Child, 13-19 Teenager, 20-59 Adult, and 60+ Senior Citizen.

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior Citizen");

    return 0;
}