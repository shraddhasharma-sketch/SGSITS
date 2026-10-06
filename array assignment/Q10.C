// Q9. Store and search student records using structure

#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i, searchRoll;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50)
    {
        printf("Invalid number of students.");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == searchRoll)
        {
            printf("\nStudent Record");
            printf("\nRoll Number = %d", s[i].roll);
            printf("\nName = %s", s[i].name);
            printf("\nMarks = %.2f", s[i].marks);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student record not found.");
    }

    return 0;
}