/*
Write a C program to replace a character of a given string at a given position.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int position;
    char newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter position to replace (0-indexed): ");
    scanf("%d", &position);
    getchar(); // consume newline character

    printf("Enter the new character: ");
    scanf("%c", &newChar);

    if (position >= 0 && position < strlen(str)) {
        str[position] = newChar;
        printf("Resulting string: %s\n", str);
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}


// Codetantra Method

#include <stdio.h>
#include <string.h>
int main(){
    int i, n;
    char a[100], ch;

    printf("Enter a string : ");
    scanf("%[^\n]", a);

    printf("Enter the position : ");
    scanf("%d", &n);
    getchar();            // To consume the newline charcter

    printf("Enter the character to replace : ");
    scanf("%c", &ch);

    // Logic
    if(n >= 0 && n < strlen(a)){
        a[n] = ch;
        printf("After replacement the string is : %s\n", a);
    } else{
        printf("After replacement the string is : %s\n", a);

    }
    return 0;
}