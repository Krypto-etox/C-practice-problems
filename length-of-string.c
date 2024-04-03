#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read the entire line until newline character

    // Loop through the string until null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
