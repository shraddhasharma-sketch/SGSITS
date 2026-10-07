//Q7. Write a program using a for loop to count how many numbers between 1 and 100 are divisible by 5.
# include <stdio.h>
int main()  

{
    int i, count=0;
    for (i=1; i<=100; i++)
    {
        if (i%5==0)
        {
            count++;
        }
    }
    printf("the numbers divisible by 5 is: %d\n", count);
    return 0;
}