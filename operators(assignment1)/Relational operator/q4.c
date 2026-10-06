//ques4. check which number is largest among three numbers.
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b)
        printf("Largest = %d", a);
    else if(b > a)
        printf("Largest = %d", b);
    else
        printf("Both numbers are equal");

    return 0;
}