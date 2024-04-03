/*
Write a C program to evalueate 1 + 1/2 + 1/3 + ..... + 1/n
At the time of execution, the program should print the message on the console as:
Enter n value:
For example, if the user gives the input as:
Enter n value : 2
then the program should print the result as: 
Result : 1.500000
*/ 

#include <stdio.h>
int main(){
    float n, element, sum = 0.0, i;
    printf("Enter n value : ");
    scanf("%f", &n);
    for(i = 1; i <= n; i++){
        sum += (1 / i);
    }
    printf("Result : %f\n", sum);
    return 0;
}