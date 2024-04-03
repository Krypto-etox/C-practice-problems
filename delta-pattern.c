/* 
Write a program to print a pattern of * seperated by spaces for the given number of rows.

Enter number of rows : 3

   *
  ***
 *****
  ***
   *

*/



#include <stdio.h>

int main() {
    int rows;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print upper part of the pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print '*'
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print lower part of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print '*'
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
