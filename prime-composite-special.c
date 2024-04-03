/*
Write a C program to read numbers from the user until -1 is encountered. Count the number of prime number and composite numbers entered by the user and display the result.

*/

#include <stdio.h>

int main() {
    int num;
    int primeCount = 0, compositeCount = 0;

    printf("Enter numbers separated by spaces (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break; // Exit the loop if -1 is encountered
        }

        // Check if the number is prime
        int isPrimeNum = 1; // Assume the number is prime
        if (num < 2) {
            isPrimeNum = 0; // Numbers less than 2 are not prime
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrimeNum = 0; // Not a prime number
                    break;
                }
            }
        }

        // Update counts based on whether the number is prime or composite
        if (isPrimeNum) {
            primeCount++;
        } else {
            compositeCount++;
        }
    }

    printf("\nResult:\n");
    printf("Number of prime numbers: %d\n", primeCount);
    printf("Number of composite numbers: %d\n", compositeCount);

    return 0;
}
