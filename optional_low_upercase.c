#include <stdio.h>

int main() {
    char ch;
    int a;

    printf("1. Lowercase to Uppercase\n");
    printf("2. Uppercase to Lowercase\n");
    printf("Enter your option: ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("Enter a lowercase character: ");
            scanf(" %c", &ch);
            if (ch >= 'a' && ch <= 'z') {
                printf("Uppercase character: %c\n", ch - 32);
            } else {
                printf("%c is not a lowercase character\n", ch);
            }
            break;
        case 2:
            printf("Enter an uppercase character: ");
            scanf(" %c", &ch);
            if (ch <= 'Z' && ch >= 'A') {
                printf("Lowercase character: %c\n", ch + 32);
            } else {
                printf("%c is not an uppercase character\n", ch);
            }
            break;
        default:
            printf("Please enter a valid option\n");
            break;
    }

    return 0;
}
