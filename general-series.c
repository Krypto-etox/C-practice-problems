/*
Write a C program to read two numbers, x and n, and then compute the sum of the series
(1 + x + x^2 + x^3 + ..... + x^n)


*/

#include <stdio.h>
#include <math.h>
int main(){
    int x, n, element, sum = 1;
    printf("Enter x andn : ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++){
        sum += pow(x, i);
    }
    printf("Sum of series : %d\n", sum);
    return 0;
}