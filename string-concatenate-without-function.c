#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Finding the length of the first string
    for (i = 0; str1[i] != '\0'; i++) {}

    // Concatenating the second string to the first string
    for (j = 0; str2[j] != '\0'; i++, j++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0'; // Adding null character at the end

    printf("Concatenated string: %s", str1);

    return 0;
}
