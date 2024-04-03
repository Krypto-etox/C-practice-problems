/*
Write a program to check whether the given number is perfect, abudent or deficient.
at the time of execution, the program should print the message on the console as:
Enter a value : 
For example, if the user gives the input as: 
Enter a value : 6
then the program should print the result as: 
The given number 6 is a perfect number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter a value : ");
    scanf("%d", &num);
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    
    if (sum == num){
        printf("The given number %d is a perfect number\n", num);
    } else if(sum < num){
        printf("The given number %d is a deficient number\n", num);
    } else{
        printf("The given number %d is an abudent number\n", num);
    }
    return 0;
}