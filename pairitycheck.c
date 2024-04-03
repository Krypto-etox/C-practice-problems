#include <stdio.h>

int main() {
    int bit;
    int countOnes = 0;

    // Read bits until -1 is encountered
    printf("Enter the sequence of bits (0's and 1's) ending with -1:\n");
    while (1) {
        scanf("%d", &bit);

        // Check if -1 is encountered to end the input
        if (bit == -1) {
            break;
        }

        // Update count of ones
        countOnes += bit;
    }

    // Output result based on even or odd parity
    if (countOnes % 2 == 0) {
        printf("Output: 1 (even parity)\n");
    } else {
        printf("Output: 0 (odd parity)\n");
    }

    return 0;
}
