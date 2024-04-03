// Write a C program to sort an array using selection sort smallest element method.




// Modified
#include <stdio.h>

int main() {
    int a[20], i, n, j, small, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before sorting, the elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }

    // Selection sort algorithm based on smallest element
    for (i = 0; i < n - 1; i++) {
        small = a[i];
        index = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < small) {
                small = a[j];
                index = j;
            }
        }
        a[index] = a[i];
        a[i] = small;
    }

    printf("After sorting, the elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
