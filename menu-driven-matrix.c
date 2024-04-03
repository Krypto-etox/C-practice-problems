#include <stdio.h>

// input a matrix
void inputMatrix(int matrix[10][10], int rows, int columns) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// display a matrix
void displayMatrix(int matrix[10][10], int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

//  add two matrices
void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

//  subtract two matrices
void subtractMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

//  upper triangular matrix
void upperTriangular(int matrix[10][10], int rows, int columns) {
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j >= i) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
}

//  lower triangular matrix
void lowerTriangular(int matrix[10][10], int rows, int columns) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j <= i) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }
}

// transpose of a matrix
void transposeMatrix(int matrix[10][10], int result[10][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

//  multiply two matrices
void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int columns1, int rows2, int columns2) {
    if (columns1 != rows2) {
        printf("Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n");
        return;
    }

    printf("Product of Matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice, rows1, columns1, rows2, columns2;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    printf("Enter the number of rows and columns for matrix 1:\n");
    scanf("%d %d", &rows1, &columns1);

    inputMatrix(matrix1, rows1, columns1);
    displayMatrix(matrix1, rows1, columns1);

    printf("\nEnter the number of rows and columns for matrix 2:\n");
    scanf("%d %d", &rows2, &columns2);

    inputMatrix(matrix2, rows2, columns2);
    displayMatrix(matrix2, rows2, columns2);

    do {
        printf("\nMenu:\n");
        printf("1. Addition of two matrices\n");
        printf("2. Subtraction of two matrices\n");
        printf("3. Find upper triangular matrix\n");
        printf("4. Find lower triangular matrix\n");
        printf("5. Transpose of a matrix\n");
        printf("6. Product of two matrices\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rows1 == rows2 && columns1 == columns2) {
                    addMatrices(matrix1, matrix2, result, rows1, columns1);
                    displayMatrix(result, rows1, columns1);
                } else {
                    printf("Matrices must have the same dimensions for addition.\n");
                }
                break;

            case 2:
                if (rows1 == rows2 && columns1 == columns2) {
                    subtractMatrices(matrix1, matrix2, result, rows1, columns1);
                    displayMatrix(result, rows1, columns1);
                } else {
                    printf("Matrices must have the same dimensions for subtraction.\n");
                }
                break;

            case 3:
                upperTriangular(matrix1, rows1, columns1);
                break;

            case 4:
                lowerTriangular(matrix1, rows1, columns1);
                break;

            case 5:
                transposeMatrix(matrix1, result, rows1, columns1);
                displayMatrix(result, columns1, rows1);
                break;

            case 6:
                if (columns1 == rows2) {
                    multiplyMatrices(matrix1, matrix2, result, rows1, columns1, rows2, columns2);
                    // displayMatrix(result, rows1, columns2);
                } else {
                    printf("Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n");
                }
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
