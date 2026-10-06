// Q6. Write a C program using nested switch-case to perform Arithmetic operations or Relational operations on two numbers.

#include <stdio.h>

int main()
{
    int choice, operation;
    float a, b;

    printf("1. Arithmetic\n");
    printf("2. Relational\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    switch(choice)
    {
        case 1:
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter operation: ");
            scanf("%d", &operation);

            switch(operation)
            {
                case 1:
                    printf("Addition = %.2f", a + b);
                    break;

                case 2:
                    printf("Subtraction = %.2f", a - b);
                    break;

                case 3:
                    printf("Multiplication = %.2f", a * b);
                    break;

                case 4:
                    if(b != 0)
                        printf("Division = %.2f", a / b);
                    else
                        printf("Cannot divide by zero");
                    break;

                default:
                    printf("Invalid operation");
            }
            break;

        case 2:
            printf("1. Greater\n");
            printf("2. Smaller\n");
            printf("Enter operation: ");
            scanf("%d", &operation);

            switch(operation)
            {
                case 1:
                    if(a > b)
                        printf("%.2f is greater", a);
                    else
                        printf("%.2f is greater", b);
                    break;

                case 2:
                    if(a < b)
                        printf("%.2f is smaller", a);
                    else
                        printf("%.2f is smaller", b);
                    break;

                default:
                    printf("Invalid operation");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}