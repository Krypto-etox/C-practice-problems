#include <stdio.h>
int main(){
    int i, j, rows, cols;
    int a[5][5], b[5][5];
    printf("Enter the order of matrix : ");
    scanf("%d %d", &rows, &cols);
    printf("Enter %d elements : ", rows * cols);
    for (i = 0; i < rows; i++){
        for( j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //
    printf("The given matrix is \n");
    for (i = 0; i < rows; i++){
        for( j = 0; j < cols; j++){
            printf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++){
        for( j = 0; j < cols; j++){
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of the given matrix is\n");
    for (i = 0; i < cols; i++){
        for( j = 0; j < rows; j++){
            printf("%d", &b[i][j]);
        }
        printf("\n");
    }
    return 0;
}