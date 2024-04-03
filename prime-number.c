/*
Write a C program to check wheteher the given number is a prime number or not.
[Hint: A prime numer is a positive integer which is greater than 1 and divisible by 1 and itself only.
A few prime number are 2, 3, 5, 7, 11, 13, 17, 19, etc.]
*/ 

#include <stdio.h>
int main(){
    int i, num;
    scanf("%d", &num);
    for (i = 2; i < num; i++){
        if (num % i == 0){
            printf("Not a prime number\n");
            break;
        }else {
            printf("Prime number\n");
            break;
        }
    }
    return 0;
}