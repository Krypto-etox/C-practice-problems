#include <stdio.h>

int main() {
    int arr[100]; // Assuming a maximum array size of 100
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // One by one move boundary of unsorted subarray
    for (int i = n - 1; i >= 0; i--) {
        // Find the maximum element in unsorted array
        int max_idx = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        // Swap the found maximum element with the last element
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array using Selection Sort (Largest Element): \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
