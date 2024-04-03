/*
Write a program to print a pattern of alphabets seperated by spaces for the given number of rows.
if input number of rows are 5, the output is as
EDCBA
DCBA
CBA
BA
A
*/

#include <stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the alphabet pattern
    for (i = rows; i >= 1; i--){
        for (j = i; j >= 1; j--){
            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }
    return 0;
}
