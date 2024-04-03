/*
write a C program without using functions, to check whether the given character is a vowel, a consonant or not a letter.
if the input charcter is vowel then display
"The given character __ is a letter and a vowel",
if the character is consonant then display
"The given charcter __ is a letter and a consonant" and 
if the charcter is not a letter then display "The given character __ is not a letter"
*/
#include <stdio.h>


int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The given character %c is a letter and a vowel\n", ch);
        } else {
            printf("The given character %c is a letter and a consonant\n", ch);
        }
    } else {
        printf("The given character %c is not a letter\n", ch);
    }

    return 0;
}

