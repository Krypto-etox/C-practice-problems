// C program to print this triangle pattern, taking input the number of rows from the user.
// for n = 4
//     *
//    **
//   ***
//  ****




#include <stdio.h>

int main() {
    int rows, rowIndex, spacesCount, starsIndex;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (rowIndex = 0; rowIndex < rows; rowIndex++) {
        // Print spaces
        for (spacesCount = 0; spacesCount < rows - rowIndex - 1; spacesCount++) {
            printf(" ");
        }

        // Print stars
        for (starsIndex = 0; starsIndex <= rowIndex; starsIndex++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
