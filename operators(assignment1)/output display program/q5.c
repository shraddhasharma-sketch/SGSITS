#include <stdio.h>

int main()
{
    int a = 10;
    int b = ++a;

    printf("%d %d", a, b);

    return 0;
}
//output: 11 11