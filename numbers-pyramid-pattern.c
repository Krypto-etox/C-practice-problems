/*
Write a C program to print a pattern of numbers seperated by spaces for the given number of rows.
Enter number of rows : 5

output

     0
    111
   22222
  3333333
 444444444

*/ 

#include <stdio.h>

int main() {
    int rows;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
