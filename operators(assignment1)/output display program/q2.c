#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("%d", a & b);
    printf("%d", a | b);
    printf("%d", a ^ b);

    return 0;
}
//output: 1 7 6