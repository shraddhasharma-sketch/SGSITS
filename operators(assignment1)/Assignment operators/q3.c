//ques3. decrease the number by 10 and print the new value
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    n -= 5;

    printf("New value = %d", n);

    return 0;
}