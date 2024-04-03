/*
Write a C program to print a pyramid of numbers separated by spaces for the given number of rows.
the input and ouput format is as follows.

Enter number of rows : 5

     1
    2 3
   4 5 6
  7 8 9 10
11 12 13 14 15

*/ 

#include <stdio.h>

int main() {
    int rows, number = 1;

    // Take input for the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print the pyramid of numbers
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", number++);
            if (j < i) {
                printf(" ");
            }
        }

        // Move to the next line after printing numbers
        printf("\n");
    }

    return 0;
}
