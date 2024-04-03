/*
Write a C program to sort the names in alphabetical order.
Read different name strings from the standard input device and write a loop to sort the given names.
*/ 


#include <stdio.h>
#include <string.h>

int main() {
    char names[100][100], temp[100];
    int n, i, j;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Input the names
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("\nNames Before sorting in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    // Sorting the names
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Displaying the sorted names
    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
