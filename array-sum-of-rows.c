#include <stdio.h>
int main(){
    int arr[5][5], i, j, rows, cols, sum;
    printf("Enter row and column sizes : ");
    scanf("%d %d", &rows, &cols);
    for (i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter the value of arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given matrix is\n");
    for( i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++){
        sum = 0;
        for (j = 0; cols; j++){
            sum = sum + arr[i][j];
        }
        printf("Sum of row - %d elements = %d\n", i, sum);
    }
    return 0;
}