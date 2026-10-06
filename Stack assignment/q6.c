//c program that uses stack to determine if a string is palindrome or not
#include <stdio.h> 
#include <string.h>

int main(){
    char str[5], stack[5];
    int top = -1, i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++){
        stack[++top] = str[i];
    }
    for(j = 0; j <= top; j++){
        if(stack[j] != str[j]){
            printf("The string is not a palindrome.");
            return 0;
        }
    }
    printf("The string is a palindrome.");
    return 0;
}