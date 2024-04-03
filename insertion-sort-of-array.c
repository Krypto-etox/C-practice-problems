#include <stdio.h>

int main() {
    int a[10], i, n, j, temp;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element for a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Before sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    // Insertion sort algorithm
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
    
    printf("After sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}
