//ques1. demonstrate the use of assignment operators
#include <stdio.h>

int main()
{
    int a = 10;

    a += 5;
    printf("After += : %d\n", a);

    a -= 5;
    printf("After -= : %d\n", a);

    a *= 2;
    printf("After *= : %d\n", a);

    a /= 2;
    printf("After /= : %d\n", a);

    a %= 3;
    printf("After %%= : %d", a);

    return 0;
}