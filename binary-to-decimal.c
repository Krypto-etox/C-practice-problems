#include <stdio.h>
#include <math.h>
int main(){
    int num, mul, sum = 0, temp;
    printf("Enter any binary number : ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0){
        int rem = temp % 10;
        int n = 0; 
        mul = (pow(2, n)) * rem;
        sum += mul;
        n++;
        temp /= 10;
    }
    printf("Decimal value : %d\n", sum);
    return 0;
}