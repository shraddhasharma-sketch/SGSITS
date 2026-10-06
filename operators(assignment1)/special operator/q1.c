//Find size of int, float, char, double
#include <stdio.h>

int main()
{
    printf("int = %zu bytes\n", sizeof(int));
    printf("float = %zu bytes\n", sizeof(float));
    printf("char = %zu bytes\n", sizeof(char));
    printf("double = %zu bytes\n", sizeof(double));

    return 0;
}