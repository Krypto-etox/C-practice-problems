#include <stdio.h>

int main() {
    int a[20], i, n, j, temp;
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Before sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j + 1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("After sorting the elements in the array in reverse order are\n");
    for (i = n - 1; i >= 0; i--) {
        printf("Value of a[%d] = %d\n", n-i-1, a[i]);
    }
    
    return 0;
}
