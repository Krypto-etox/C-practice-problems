/*
Write a C program to find whether given number is magic number or not
example:
1. Let us consider a number 1729
2. find the sum of digits of the given number.(1 + 7 + 2 + 9 => 19)
3. reverse of digit sum output. Reverse of 19 is 91.
4. find the product of digit sum and the reverse of digit sum. (19 X 91 = 1729)
5. if the product value and the given input are same, then the given number is a magic number (19 X 91 <=> 1729)
6. So, 1729 is a magic number.
*/ 

#include <stdio.h>

int main() {
    int n, temp, rev = 0, sum_of_digits = 0;
    
    printf("Enter a Number: ");
    scanf("%d", &n);

    temp = n;
    
    while (temp > 0) {
        sum_of_digits = sum_of_digits + temp % 10;
        temp = temp / 10;
    }

    temp = sum_of_digits;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev * sum_of_digits == n) {
        printf("%d is a Magic Number.\n", n);
    } else {
        printf("%d is not a Magic Number.\n", n);
    }

    return 0;
}
