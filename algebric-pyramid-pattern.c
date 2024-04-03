/*
Write a C program to print a right-angled triangle with charcters sepated by a space starting with 'A' and ending with that particular row's number.

The numbers printed in each row should be the same as that particular rows number.

the input and output format is as follows: 
 Enter number of rows : 5
A
B B
C C C
D D D D
E E E E E
*/ 

#include <stdio.h>

int main() {
    int rows;

    // Take input for the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print the right-angled triangle
    for (int i = 1; i <= rows; i++) {
        // Print characters
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + i - 1);
            // if (j < i) {
            //     printf(" ");
            // }
        }

        // Move to the next line after printing characters
        printf("\n");
    }

    return 0;
}


// 

