#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    int matrix[MAX_ROWS][MAX_COLS];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int row1, row2;
    // Input rows to be interchanged
    printf("Enter the row numbers to interchange (1 to %d): ", rows);
    scanf("%d %d", &row1, &row2);

    // Check if row numbers are valid
    if (row1 >= 0 && row1 <= rows && row2 >= 0 && row2 <= rows) {
        // Interchange rows without using functions
        for (int j = 0; j < cols; ++j) {
            // Swap elements of row1 and row2
            int temp = matrix[row1 - 1][j];
            matrix[row1 - 1][j] = matrix[row2 - 1][j];
            matrix[row2 - 1][j] = temp;
        }

        // Display updated matrix
        printf("Updated Matrix:\n");
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid row numbers. Please enter valid row numbers.\n");
    }

    return 0;
}
