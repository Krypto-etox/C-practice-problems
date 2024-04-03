/*
Write a C program to read in two numbers, x, and n, and then compute the sum of this geometric progression: 1 + x + x^2 + x^3 + .... + x^n
For example: if n is 3 and x is 5, then the program computes 1 + 5 + 25 + 125.

*/ 

#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    int sum = 0;

    // Input the values of x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the geometric progression
    for (int i = 0; i <= n; i++) {
        sum += pow(x, i);
    }

    // Print the result
    printf("Sum of the geometric progression: %d\n", sum);

    return 0;
}
