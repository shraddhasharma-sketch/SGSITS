//ques5. convert seconds to hours, minutes and seconds
#include <stdio.h>

int main()
{
    int seconds, hours, minutes;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d", seconds);

    return 0;
}