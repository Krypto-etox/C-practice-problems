/*
Write a C program to calculate the following, where x is a fractional value.
1 - x/2 + x^2/4 - x^3/6
At the time of execution, the program should print the message on the console as:
Enter value of x :
For example, if the user gives the input as: 
Enter value of x : 3
then the program should print the result as: 
Sum of series : -2.750000
*/ 

#include <stdio.h>
#include <math.h>

int main() {
    float x, result = 1.0;

    printf("Enter value of x: ");
    scanf("%f", &x);

    result -= x / 2.0;
    result += pow(x, 2) / 4.0;
    result -= pow(x, 3) / 6.0;

    printf("Sum of series: %f\n", result);

    return 0;
}
