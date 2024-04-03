/*
Write a C program to evalueate   1 - (1 / 2!) + (1 / 3!) - (1 / 4!) + .... + (1 / n!)
At the time of execution, the program should print the message on the console as:
Enter n value : 
for example, if the user gives input as: 
Enter n value : 2
then the program should print the result as: 
Result : 0.500000
*/ 
#include <stdio.h>

int main() {
    int n;
    double result = 0, factorial = 1;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        if (i % 2 == 0) {
            result -= 1.0 / factorial;
        } else {
            result += 1.0 / factorial;
        }
    }

    printf("Result: %.6f\n", result);

    return 0;
}
