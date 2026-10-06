// C program to demonstrate bitwise operators
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("AND = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("XOR = %d\n", a ^ b);

    return 0;
}