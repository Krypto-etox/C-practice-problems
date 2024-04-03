/*
Write a C program to print hollow rhombus star pattern and print the result as shown in example.


Enter rows : 5
     *****
    *   *
   *   *
  *   *
 ***** 

*/ 

#include <stdio.h>

int main() {
    int rows;

    // Take input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the hollow rhombus star pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the first and last row
        if (i == 1 || i == rows) {
            for (int j = 1; j <= rows; j++) {
                printf("*");
            }
        } else {
            // Print stars for the hollow part
            for (int j = 1; j <= rows; j++) {
                if (j == 1 || j == rows) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
