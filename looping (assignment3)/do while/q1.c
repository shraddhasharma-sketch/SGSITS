// Q1: Print Hello and continue using a do-while loop until the user chooses N.
#include <stdio.h>

int main(void)
{
    char choice;
    do
    {
        printf("Hello\n");
        printf("Do you want to continue? (Y/N): ");
        if (scanf(" %c", &choice) != 1) return 0;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}