#include <stdio.h>
void main(){
    int n, i, fact=1;
    printf("Enter an integer : ");
    scanf("%d",&n);
    i = 2;
    while (i<=n){
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d : %d\n",n,fact);
    
}

// #method 2
// using do while

void main(){
    int i, n, fact = 1;;
    printf("Enter the number: ");
    scanf("%d",&n);
    i = 2;
    do{
        fact = fact*i;
        i++;
    }while(i <= n);
    printf("The factorial of %d is %d",n, fact);
}