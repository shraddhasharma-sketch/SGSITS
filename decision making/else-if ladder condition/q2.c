// Q2. Write a C program to classify a number as Small (1-10), Medium (11-50), Large (51-100), or Very Large (above 100).

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n >= 1 && n <= 10)
        printf("Small");
    else if(n <= 50)
        printf("Medium");
    else if(n <= 100)
        printf("Large");
    else
        printf("Very Large");

    return 0;
}