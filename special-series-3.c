/*
Write a C program to evaluate the sum of series 1 + x^1/1+ x^2/2 + x^3/3 + ... + x^n/n
Ath the time of execution, the program should print the message on the console as: 
Enter value of x : 
For example, if the user gives the input as: 
Enter value of x : 2
Now, the program should print the message on the console as:
Enter n value : 
For example, if the user gives the input as:
Enter n value : 2
then the program should print the result as :
Sum of series : 5.000000
*/ 


#include <stdio.h>
#include <math.h>

int main() {
    float x, sum = 1.0;
    int n;

    // Input the value of x
    printf("Enter value of x: ");
    scanf("%f", &x);

    // Input the value of n
    printf("Enter n value: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / i;
    }

    // Print the result
    printf("Sum of series: %f\n", sum);

    return 0;
}
