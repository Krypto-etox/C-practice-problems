#include <stdio.h>

int main() {
    int prev, current;
    int distinctCount = 1; // Initialize with 1 as there is at least one element in the sequence

    // Read the first element
    scanf("%d", &prev);

    // Read the sequence until -1 is encountered
    while (1) {
        scanf("%d", &current);

        // Check if -1 is encountered to end the input
        if (current == -1) {
            break;
        }

        // Check if the current element is different from the previous one
        if (current != prev) {
            distinctCount++;
        }

        // Update the previous element
        prev = current;
    }

    // Output the number of distinct elements
    printf("Number of distinct elements: %d\n", distinctCount);

    return 0;
}
