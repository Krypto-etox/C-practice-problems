// Correct the given code to print the following pattern
// if rows are 4

//   * * * * 
//    * * * 
//     * * 
//      * 



#include <stdio.h>
void main(){
    int rows, rowIndex, spacesCount, starsIndex;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (rowIndex = rows - 1; rowIndex >= 0; rowIndex--){
        for (spacesCount = 0; spacesCount < rows - rowIndex; spacesCount++){
            printf(" ");
        }
        for (starsIndex = 0; starsIndex <= rowIndex; starsIndex++){
            printf("* ");
        }
        printf("\n");
    }
