// Q4. Write a C program using switch-case for traffic signals: R for Stop, Y for Wait, and G for Go.

#include <stdio.h>

int main()
{
    char signal;

    printf("Enter signal (R/Y/G): ");
    scanf(" %c", &signal);

    switch(signal)
    {
        case 'R':
        case 'r':
            printf("Red - Stop");
            break;

        case 'Y':
        case 'y':
            printf("Yellow - Wait");
            break;

        case 'G':
        case 'g':
            printf("Green - Go");
            break;

        default:
            printf("Invalid signal");
    }

    return 0;
}