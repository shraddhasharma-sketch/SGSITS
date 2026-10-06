//ques2. check whether the number is positive, negative or zero.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}