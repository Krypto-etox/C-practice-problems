#include <stdio.h>
int main(){
    int number, sum=0;
    printf("Enter a five-digit number:")
    scanf("%d",&number);
    if (number>=10000 && number<=99999){
        while (number>0){
            sum += number%10;
            number /=10;
        }
        printf("Sum of digits: %d\n",sum);
    } else{
        printf("Error: Please Enter a valid five digit number.\n")
    }
    return 0;
}