// Write a C program to check whether the given string is a palindrom or not.

#include <stdio.h>
#include <string.h>

int main() {
    char ch[80];
    int i, j, length, flag = 0;
    
    printf("Enter a string : ");
    scanf("%s", ch);

    length = strlen(ch);
    
    // Compare characters from the beginning with characters from the end
    for(i = 0, j = length - 1; i < j; i++, j--) {
        if(ch[i] != ch[j]) {
            flag = 1; // If characters do not match, set flag to 1 and break
            break;
        }
    }
    
    if(!flag) {
        printf("The given string %s is a palindrome\n", ch);
    } else {
        printf("The given string %s is not a palindrome\n", ch);
    }
    
    return 0;
}
