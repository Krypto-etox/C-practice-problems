// Correct the above code to print this output when num is 4.
//     *
//    *A*
//   *A*A*
//  *A*A*A*


 #include <stdio.h>

int main() {
    int rows, rowIndex, spacesCount, starIndex;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (rowIndex = 0; rowIndex < rows; rowIndex++) {
        // Print spaces
        for (spacesCount = 0; spacesCount < rows - rowIndex - 1; spacesCount++) {
            printf(" ");
        }

        // Print stars and letters
        for (starIndex = 0; starIndex < (2 * rowIndex + 1); starIndex++) {
            if (starIndex % 2 == 0) {
                printf("*");
            } else {
                printf("A");
            }
        }

        printf("\n");
    }

    return 0;
}


// ====================================================================================================
// Modified code of codetantra so that it passes test.
#include <stdio.h>

int main() {
    int rows, rowIndex, spacesCount, starIndex;
    
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (rowIndex = 0; rowIndex < rows; rowIndex++) {
        // Print spaces (including one additional space initially)
        for (spacesCount = 0; spacesCount < rows - rowIndex; spacesCount++) {
            printf(" ");
        }

        // Print stars and letters
        for (starIndex = 0; starIndex < (2 * rowIndex + 1); starIndex++) {
            if (starIndex % 2 == 0) {
                printf("*");
            } else {
                printf("A");
            }
        }

        printf(" \n");
    }

    return 0;
}
