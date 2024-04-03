#include <stdio.h>
void main(){
    int rows, rowIndex, starsCount; 
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}