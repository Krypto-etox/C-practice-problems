#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20], c[50];
    int i, j;

    printf("Enter first string : ");
    scanf("%s", a);
    printf("Enter second string : ");
    scanf("%s", b);

    // Copy the characters of 'a' into 'c'
    for (i = 0; i < strlen(a); i++) {
        c[i] = a[i];
    }

    // Append the characters of 'b' into 'c'
    for (j = 0; j < strlen(b); j++) {
        c[i] = b[j];
        i++;
    }

    c[i] = '\0'; // Add null terminator to end the string

    printf("The concatenated string = %s\n", c);

    return 0;
}
