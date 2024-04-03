// Write a C program to revese a given string.
#include <stdio.h>
#include <string.h>

int main() {
    char ch[80], temp;
    int i, j;
    
    printf("Enter a string : ");
    scanf("%s", ch);

    // Calculate the length of the string
    int len = strlen(ch);
    
    i = 0;
    j = len - 1; // Initialize j to the last index of the string

    // Reverse the string
    while(i < j) {
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }
    
    printf("The reverse of a given string : %s\n", ch);
    
    return 0;
}
