/*
Write a C program to input the number of rows of the triangle and print the following patter.
for rows = 4

1 2 3 4
1 2 3
1 2 
1

*/ 

#include <stdio.h>
int main(){
    int rowIndex, num, rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for (rowIndex = rows; rowIndex >= 1; rowIndex--){
        for (num = 1; num <= rowIndex ; num++){
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}