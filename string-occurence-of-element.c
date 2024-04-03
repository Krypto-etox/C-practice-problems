// Write a C program to count the occurence of a character in a given string.

#include <stdio.h>
#include <string.h>
int main(){
    int i, n, count = 0; 
    char str[100], ch;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character : ");
    scanf("%c", &ch);

    for(i = 0; i < strlen(str); i++){
        if(str[i] == ch){
            count++;
        }
    }
    if(count != 0){
        printf("Occurences of '%c' = %d\n", ch, count);
    } else{
        printf("'%c' is not present in %s\n", ch, str);
    }
    return 0;
}