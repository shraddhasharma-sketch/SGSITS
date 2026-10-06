//even or odd using bitwise operator AND
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n & 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}