//Q5. Write a program using a for loop to print the multiplication table of anumber entered by the user.
#include <stdio.h>
int main()
{
    int i,n, multiplication;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        multiplication=n*i;
        printf("multiplication of %d is %d\n", n, multiplication);

    }
    return 0;
}