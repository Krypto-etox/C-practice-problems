/*
# Write a C program to print the fibonacci series, taking the limit as input from the user.
Ex. 0 1 1 2 3 5 8 13 21 ..........
*/
#include <stdio.h>
void main(){
    int fib1 = 0, fib2 = 1, fib3, n;
    printf("Enter the maximum limit to generate the fibonacci series : ");
    scanf("%d", &n);
    printf("The Fibonacci series is : %d %d", fib1, fib2);
    for (fib3 = 1; fib3 <= n ; fib3 = fib1 + fib2){        // Write the initialization, condtion, and increment part
        printf(" %d", fib3);
        fib1 =  fib2;       // Assign a value
        fib2 =  fib3;  // Assign a value
    }
}