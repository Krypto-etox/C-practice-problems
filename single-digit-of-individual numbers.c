#include <stdio.h>
int main(){
    int num, result = 0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    int sum = 0, temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    while (sum > 0){
        int digit = sum % 10;
        result += digit;
        sum /= 10;
    }
    int result2 = 0;
    while (result > 0){
        int digit = result % 10;
        result2 += digit;
        result /= 10;
    }
    printf("Result = %d\n", result2);
    return 0;
}