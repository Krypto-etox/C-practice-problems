/*
write a C program to print the follwing pattern of triangle for the given number of rows.
for rows = 4

1
1 2 
1 2 3
1 2 3 4
*/ 

#include <stdio.h>
int main(){
    int rows, rowIndex, num;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (rowIndex = 1; rowIndex <= rows; rowIndex++){
        for (num = 1; num <= rowIndex; num++){
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}