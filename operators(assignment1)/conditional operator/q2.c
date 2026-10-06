// even or odd using conditional operator
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even") : printf("Odd");

    return 0;
}