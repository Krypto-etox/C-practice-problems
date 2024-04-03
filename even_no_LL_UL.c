#include <stdio.h>
void main(){
    int num1, num2, sum=0;
    printf("Enter lower and upper limit : ");
    scanf("%d %d", &num1, &num2);
    if (num1 % 2 != 0){
        num1 = num1 + 1;
    }
    while (num1 <= num2){
        sum = sum + num1;
        num1 = num1 + 2;
    }
    printf("The sum of even integers between the given limits = %d\n", sum);
}