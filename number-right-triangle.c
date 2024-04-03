/*
C program to print this triangle, taking input number of rows.
for rows to be 5, the pattern is

1
2 4
3 6 9
4 8 12 16
5 10 15 20 25

*/

#include <stdio.h>

void main(){
    int rowIndex, num, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    for (rowIndex = 1; rowIndex <= n; rowIndex++){
        for (num = 1; num <= rowIndex; num++){
            printf("%d", rowIndex * num);
        }
        printf("\n");
    }
}
