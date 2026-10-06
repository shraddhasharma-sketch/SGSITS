//ques4.find the final value of a after performing the following operations
#include <stdio.h>

int main()
{
    int a = 10;

    a += 5;
    a -= 2;
    a *= 3;
    a /= 2;

    printf("Final value = %d", a);

    return 0;
}