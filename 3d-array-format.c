#include <stdio.h>
int main(){
    int a[3][3][3], i, j, rows, cols, pages, k;
    printf("Enter page, row and column sizes : ");
    scanf("%d %d %d", &pages, &rows, &cols);
    for (i = 0; i < pages; i++){
        for (j = 0; j < rows; ++j){
            for (k = 0; k < cols; ++k){
                printf("Enter the value of a[%d][%d][%d] : ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    for(i = 0; i < pages; i++){
        for (j = 0; j < rows; j++){
            for (k = 0; k < cols; k++){
                printf("The value of a[%d][%d][%d] : %d\n", i, j, k, a[i][j][k]);
            }
        }
    }
    return 0;
}