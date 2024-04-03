#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            char ch = tolower(string[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(string[i])) {
            digits++;
        }
        else if (string[i] == ' ') {
            spaces++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of integers: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
