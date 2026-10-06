//ques1. check whether the number is between 10 and 50 or not
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n >= 10 && n <= 50)
        printf("Number is between 10 and 50");
    else
        printf("Number is not between 10 and 50");

    return 0;
}