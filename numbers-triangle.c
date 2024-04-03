/*
Write a C program to print the folling table,
if the input rows are 3, the output is

  1
 1 2
1 2 3
*/ 

#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate through rows
    for (i = 1; i <= rows; i++) {
        // Loop to print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Loop to print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
