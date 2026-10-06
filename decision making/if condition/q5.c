// Q5. Write a C program to input salary and print "High Salary" if salary is greater than Rs. 50,000.

#include <stdio.h>

int main()
{
    float salary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary > 50000)
    {
        printf("High Salary");
    }

    return 0;
}