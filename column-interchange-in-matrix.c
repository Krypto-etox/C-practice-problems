#include <stdio.h>
int main(){
    int a[25][25], i, j, rows, cols, col1,col2;
    printf("Enter the row & column sizes of matrix : ");
    scanf("%d %d", &rows, &cols);
    printf("Enter %d elements : ", rows * cols);
    for (i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given matrix is \n");
    for(i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter column to be interchange : ");
    scanf("%d %d", &col1, &col2);
    if (col1 < cols && col2 < cols && col1 >= 0 && col2 >= 0){
        for (i = 0; i < rows; i++){
            int temp = a[i][col1];
            a[i][col1] = a[i][col2];
            a[i][col2] = temp;
        }
        printf("After interchange the matrix is\n");
        for (i = 0; i < rows; i++){
            for (j = 0; j < cols; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    } else{
        printf("Interchange of columns are not possibe\n");
    }
    return 0;
}