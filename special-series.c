// Write a C program to calculate the following series value, where x is a fractional value.
// 1- X²/2! + X²/4! X/6! + X³/8!
// X10/101
// At the time of execution, the program should print the message on the console as:
// Enter value of x :
// For example, if the user gives the input as:
// Enter value of x : 1
// then the program should print the result as:
// Sum of series: 0.540302



#include <stdio.h>
#include <math.h>

int main() {
    int  i, j, fact = 1;
    float num, result = 0, elements;

    printf("Enter value of x : ");
    scanf("%f", &num);

    for (i = 0; i <= 10; i = i + 2) {
        fact = 1; // Reset fact for each iteration
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        elements = ((pow(-1, i / 2)) * pow(num, i)) / fact;
        result += elements;
    }

    printf("Sum of series : %f\n", result);

    return 0;
}
