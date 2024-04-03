/*
Write a program to print hollow parallelogram star pattern and print the result as show3n in the example.

sample input and output:

Enter rows : 5
Enter columns : 10
    **********
   *        *
  *        *
 *        *
**********  
*/ 

#include <stdio.h>

int main() {
    int rows, columns;

    // Take input for the number of rows and columns
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    // Print the hollow parallelogram star pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the first and last row
        if (i == 1 || i == rows) {
            for (int j = 1; j <= columns; j++) {
                printf("*");
            }
        } else {
            // Print stars for the hollow part
            for (int j = 1; j <= columns; j++) {
                if (j == 1 || j == columns) {
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
