/*
Write a C program to printf a pattern of alphabets seperated by spaces for the given nunber of rows.

Input...
>>>  Enter number of rows : 5
Output...

>>> ABCDEDCBA
    ABCD DCBA
    ABC   CBA
    AB     BA
    A       A


*/ 

#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows from the user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Loop to print the alphabet pattern
    for (int i = 0; i < rows; i++) {
        // Print spaces for the first part of the row
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print characters in ascending order
        for (char ch = 'A'; ch <= 'A' + rows - i - 1; ch++) {
            printf("%c", ch);
        }

        // Print characters in descending order
        for (char ch = 'A' + rows - i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}


// Method 2

#include <stdio.h>
int main(){
    int i, j, k;
    for (i = 1; i <= 4; i++){
        k = 'A';
        for (j = 1; j <= 7; j++){
            if (j <= 5 - i || j >= 3 + i){
                printf("%c", k);
                j < 4 ? k++ : k--;
            }
            else{
                printf(" ");
                if (j == 4){
                    k--;
                }
            }
        }
        printf("\n");
    }
}

// Method 3 Operational
int main(void) {
    int n = 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", 'A'+j);
        }

        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }

        for (int j = n - i - 1; j >= 0; j--) {
            // Skip the first letter
            if (j == n - 1) continue;

            printf("%c", 'A'+j);
        }

        printf("\n");
    }
}


