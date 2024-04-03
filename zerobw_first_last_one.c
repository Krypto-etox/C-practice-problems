#include <stdio.h>

int main() {
    int bit;
    int countZeros = 0;
    int firstOneFound = 0;

    // Read bits until -1 is encountered
    printf("Enter the sequence of bits (0's and 1's) ending with -1:\n");
    while (1) {
        scanf("%d", &bit);

        // Check if -1 is encountered to end the input
        if (bit == -1) {
            break;
        }

        // Process the sequence to count 0's between the first and last 1
        if (bit == 0 && firstOneFound) {
            countZeros++;
        } else if (bit == 1) {
            firstOneFound = 1; // Set flag when the first 1 is encountered
            countZeros = 0;    // Reset count for zeros after a 1 is found
        }
    }

    // Output the number of 0's between the first and last 1
    printf("Number of 0's between the first and last 1: %d\n", countZeros);

    return 0;
}
