// ques1. Input two numbers and print sum, difference, product, quotient and remainder

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0) {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    } else {
        printf("Cannot divide by zero.\n");
    }
 return 0;
}