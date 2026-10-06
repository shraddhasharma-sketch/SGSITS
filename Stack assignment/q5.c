//c program that uses stack to reverse a string and display the string
#include <stdio.h>
int main(){
    char str[5], stack[5];
    int top = -1, i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++){
        stack[++top] = str[i];
    }
    printf("The reversed string is: ");
    for(j = top; j >= 0; j--){
        printf("%c", stack[j]);
    }
    return 0;
}