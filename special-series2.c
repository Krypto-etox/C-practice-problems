/*
Write a C program to evalueate   1 + (x^1 / 1!) + (x^2 / 2!) + (x^3 / 3!) + .... + (x^n / n!)
At the time of execution, the program should print the message on the console as:
Enter value of x : 
for example, if the user give the input as : 
Enter value of x : 3
Now, the program should print the message on the console as:
Enter n value : 
for example, if the user gives the input as:
Enter n value : 2
then the program should print the result as: 
Sum of series : 8.500000
*/ 

#include <stdio.h>
#include <math.h>

int main() {
    double x, result = 1.0, factorial = 1.0;

    printf("Enter value of x : ");
    scanf("%lf", &x);

    int n;
    printf("Enter n value : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        result += pow(x, i) / factorial;
    }

    printf("Sum of series : %.6f\n", result);

    return 0;
}
