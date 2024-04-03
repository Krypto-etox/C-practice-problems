/*
Write a program to find the prime numbers between given intervals.
*/


#include <stdio.h>

int main() {
    int lower, upper;

    // Get user input for lower and upper limits
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    // Print prime numbers within the given range
    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        int isPrime = 1; // Assume i is prime

        if (i <= 1) {
            isPrime = 0; // i is not prime if less than or equal to 1
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // i is not prime
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }
    printf(" ");

    return 0;
}
