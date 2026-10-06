//ques4. check whether the number is positive and even or not
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n > 0 && n % 2 == 0)
        printf("Positive and Even");
    else
        printf("Not Positive and Even");

    return 0;
}