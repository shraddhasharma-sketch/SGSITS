
#include <stdio.h>

int main() {
    int a[3][4], i, j, largest;
    printf("Enter the elements of the 3x4 array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Largest elements in each row:\n");
    for (i = 0; i < 3; i++) {
        largest = a[0][0];
        for (j = 1; j < 4; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
        printf("Row %d: %d\n", i + 1, largest);
    } 

    return 0;
}