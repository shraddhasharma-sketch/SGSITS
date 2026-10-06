//ques2. Area and perimeter of rectangle

#include <stdio.h>

int main()
{
    int area, perimeter, length, width;

    printf("Enter length and width of the rectangle: ");
    scanf("%d%d", &length, &width);
    
    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}