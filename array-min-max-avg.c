// Test 2;
#include <stdio.h>

int main() {
    int arr[20], number, sum = 0, min = 0, max = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &number);

    printf("Enter the elements: ");
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }

    double avg;
    
    // Initialize min with the first element in the array
    min = arr[0];
    
    for (int i = 0; i < number; i++) {
        sum += arr[i];
        
        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    avg = (double)(sum) / number;
    printf("Min, max, avg: %d %d %0.2f\n", min, max, avg);

    return 0;
}
