/*
Write a C program to print a pattern of numbers separated by spaces for the given number of rows.

Enter number of rows : 4

output

    1
   232
  34543
 4567654
*/ 

#include <stdio.h>

int main() {
    int rows;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
