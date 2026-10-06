//Pre-increment and Post-increment ++a = first increase, then use a++ = first use, then increase
#include <stdio.h>

int main()
{
    int a = 5;

    printf("Pre-increment = %d\n", ++a);

    a = 5;

    printf("Post-increment = %d\n", a++);
    printf("Final value = %d", a);

    return 0;
}