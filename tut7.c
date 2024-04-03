#include <stdio.h>
int main(){
    int number,sum;
    printf("Enter a five digit number: ")
    scanf("%d",&number);
    sum = number%10 + (number/10)%10 +(number%100)%10 + (number%1000)%10 + (number%10000)%10;
    printf("Sum of digits: %d\n", sum);
    return 0;
} 