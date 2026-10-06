//Pre-decrement and Post-decrement
#include <stdio.h>

int main()
{
    int a = 5;

    printf("Pre-decrement = %d\n", --a);

    a = 5;

    printf("Post-decrement = %d\n", a--);
    printf("Final value = %d", a);

    return 0;
}