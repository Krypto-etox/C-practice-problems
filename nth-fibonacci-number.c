/*
Write a C program to find the nth fibonacci number.
Note - 1: if the ninput is given as any negtive number like -5, then the output should be printed as "Invalid".
constraint:
-92 <= n <= 92
*/

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0 || n < -92 || n > 92) {
        printf("Invalid\n");
        return 1; // Return 1 to indicate an error
    }

    long long a = 0, b = 1, temp;

    if (n == 0) {
        printf("The 0th Fibonacci number is: 0\n");
        return 0;
    } else if (n == 1 || n == -1) {
        printf("The %d%s Fibonacci number is: 1\n", n, (n % 10 == 1 && n % 100 != 11) ? "st" : (n % 10 == 2 && n % 100 != 12) ? "nd" : (n % 10 == 3 && n % 100 != 13) ? "rd" : "th");
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("The %d%s Fibonacci number is: %lld\n", n, (n % 10 == 1 && n % 100 != 11) ? "st" : (n % 10 == 2 && n % 100 != 12) ? "nd" : (n % 10 == 3 && n % 100 != 13) ? "rd" : "th", b);

    return 0;
}
