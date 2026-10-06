//smallesst of two number using conditional operator
#include <stdio.h>

int main()
{
    int a, b, smallest;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    smallest = (a < b) ? a : b;

    printf("Smallest = %d", smallest);

    return 0;
}