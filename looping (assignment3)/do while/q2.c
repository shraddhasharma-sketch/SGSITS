// Q2: Number analysis menu using do-while and switch-case.
#include <stdio.h>

int main(void)
{
    int choice, n, digit, sum, i;
    long long temp, reverse;
    unsigned long long factorial;

    do
    {
        printf("\n1.Find Factorial\n2.Find Sum of Digits\n");
        printf("3.Reverse Number\n4.Check Palindrome\n5.Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 0;

        switch (choice)
        {
            case 1:
                printf("Enter a number from 0 to 20: ");
                if (scanf("%d", &n) != 1) return 0;
                if (n < 0 || n > 20)
                {
                    printf("Enter a number from 0 to 20\n");
                    break;
                }
                factorial = 1;
                i = 1;
                if (n > 0)
                {
                    do
                    {
                        factorial = factorial * i;
                        i++;
                    } while (i <= n);
                }
                printf("Factorial: %llu\n", factorial);
                break;

            case 2:
                printf("Enter a number: ");
                if (scanf("%d", &n) != 1) return 0;
                temp = n;
                if (temp < 0) temp = -temp;
                sum = 0;
                do
                {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                } while (temp != 0);
                printf("Sum of digits: %d\n", sum);
                break;

            case 3:
                printf("Enter a number: ");
                if (scanf("%d", &n) != 1) return 0;
                temp = n;
                if (temp < 0) temp = -temp;
                reverse = 0;
                do
                {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                } while (temp != 0);
                if (n < 0) reverse = -reverse;
                printf("Reversed number: %lld\n", reverse);
                break;

            case 4:
                printf("Enter a number: ");
                if (scanf("%d", &n) != 1) return 0;
                if (n < 0)
                {
                    printf("Not a palindrome\n");
                    break;
                }
                temp = n;
                reverse = 0;
                do
                {
                    digit = temp % 10;
                    reverse = reverse * 10 + digit;
                    temp = temp / 10;
                } while (temp != 0);
                if (reverse == n)
                    printf("Palindrome\n");
                else
                    printf("Not a palindrome\n");
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