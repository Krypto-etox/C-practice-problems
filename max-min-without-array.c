/*
Write a C program to find maximum and minimum of a given set of numbers without using arrays.
*/

#include <stdio.h>

int main() {
    int c, num, max, min;

    // Input the count of numbers
    printf("Enter the count of numbers: ");
    scanf("%d", &c);

    // Input the numbers in a single line
    printf("Enter %d numbers separated by spaces: ", c);
    
    // Initialize max and min with the first number
    scanf("%d", &num);
    max = min = num;

    // Loop to input and find max and min
    for (int i = 2; i <= c; ++i) {
        scanf("%d", &num);

        // Update max and min
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    // Display the results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
