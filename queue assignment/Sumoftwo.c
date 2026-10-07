#include <stdio.h>

void sumoftwo(int a[], int b[])
{
    int ab[3];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] + b[i] == 10)
        {
            ab[i] = a[i] + b[i];
        }
        else if (a[i] + b[i] <= 10)
        {
            ab[i] = a[i] + b[i];
        }
        else
        {
            ab[i] = a[i] + b[i] + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ab[i]);
    }
}

int main()
{
    int n = 3;
    int a[3] = {1, 2, 3};
    int b[3] = {1, 8, 3};

    sumoftwo(a, b);
}