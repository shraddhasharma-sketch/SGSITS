//ques2.check whether the person is eligible to vote or not.
#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");

    return 0;
}