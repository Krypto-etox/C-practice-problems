/*Write a c program to input a character from the user and check whether it's alphabet and vowel*/ 
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is an alphabet and a vowel\n", ch);
                break;
            default:
                printf("%c is an alphabet and a consonant\n", ch);
                break;
        }
    } else {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}
