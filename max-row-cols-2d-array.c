#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
    int array[ROWS][COLS];

    // Input elements for the 2D array
    printf("Enter elements for the %d x %d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Find and print the largest and smallest elements of each row
    for (int i = 0; i < ROWS; i++) {
        int largest = array[i][0];
        int smallest = array[i][0];

        for (int j = 1; j < COLS; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }

            if (array[i][j] < smallest) {
                smallest = array[i][j];
            }
        }

        printf("Row %d: Largest = %d, Smallest = %d\n", i + 1, largest, smallest);
    }

    return 0;
}
