// Q3: Student result menu using a do-while loop.
#include <stdio.h>

int main(void)
{
    int marks[5], choice, i, total = 0;
    int entered = 0, pass = 1;
    float percentage = 0;

    do
    {
        printf("\n1.Enter Marks\n2.Calculate Total\n");
        printf("3.Calculate Percentage\n4.Display Result\n5.Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 0;

        switch (choice)
        {
            case 1:
                total = 0;
                pass = 1;
                i = 0;
                do
                {
                    printf("Enter marks for subject %d (0 to 100): ", i + 1);
                    if (scanf("%d", &marks[i]) != 1) return 0;
                    if (marks[i] < 0 || marks[i] > 100)
                    {
                        printf("Invalid marks; enter again\n");
                        continue;
                    }
                    total = total + marks[i];
                    if (marks[i] < 33) pass = 0;
                    i++;
                } while (i < 5);
                percentage = total / 5.0f;
                entered = 1;
                printf("Marks entered successfully\n");
                break;

            case 2:
                if (entered == 0)
                    printf("Enter marks first\n");
                else
                    printf("Total: %d out of 500\n", total);
                break;

            case 3:
                if (entered == 0)
                    printf("Enter marks first\n");
                else
                    printf("Percentage: %.2f%%\n", percentage);
                break;

            case 4:
                if (entered == 0)
                {
                    printf("Enter marks first\n");
                    break;
                }
                printf("Subject\tMarks\n");
                i = 0;
                do
                {
                    printf("%d\t%d\n", i + 1, marks[i]);
                    i++;
                } while (i < 5);
                printf("Total: %d out of 500\n", total);
                printf("Percentage: %.2f%%\n", percentage);
                if (pass == 1)
                    printf("Result: PASS\n");
                else
                    printf("Result: FAIL\n");
                break;

            case 5:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}