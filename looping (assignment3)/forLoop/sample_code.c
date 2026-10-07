#include <stdio.h>
int main()

{
    int i, count = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            count++;
                    printf("%d\n", i);

        }
    }
        printf("%d\n", count);
    return 0;
}