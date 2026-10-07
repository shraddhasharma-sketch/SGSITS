//Q2.Write a C program using a while loop to print numbers from 20 to 1.
#include <stdio.h>
int main()
{
    int i = 20;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}