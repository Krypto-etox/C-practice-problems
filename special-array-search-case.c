/*
Write a C program which reads an array to print true if the elements 1, 2 and 3 are present in the array( with max size 10). They need not occur sequentially in the array. Print false if at least one of them is missing.

*/

#include <stdio.h>

int main() {
    int arr[10];
    int n;

    // Input the size of the array
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    // Check if the size is within the valid range
    if (n < 1 || n > 10) {
        printf("Invalid array size. Exiting.\n");
        return 1;  // Return an error code
    }

    // Input array elements
    printf("Enter %d elements for the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if 1, 2, and 3 are present in the array
    int found1 = 0, found2 = 0, found3 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            found1 = 1;
        } else if (arr[i] == 2) {
            found2 = 1;
        } else if (arr[i] == 3) {
            found3 = 1;
        }
    }

    // Output the result
    if (found1 && found2 && found3) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
