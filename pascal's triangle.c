#include <stdio.h>
void main(){
    int index, spaces, rows, col, number;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(index = 0; index < rows; index++){
        for(spaces = rows; spaces > index; spaces--){
            printf(" ");
        }
        number = 1;
        for (col = 0; col <= index; col++){
            printf("%d ", number);
            number = number * ( index - col) / (col + 1);
        }
        printf("\n");
    }
}

// Method 2

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Generate and print Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        int coefficient = 1;

        // Leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        // Generate and print coefficients for each row
        for (int j = 0; j <= i; j++) {
            printf("      %d", coefficient);
            coefficient = coefficient * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
