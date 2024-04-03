/*C program to take input upperlimits and print the natural numbers till that upper limit*/
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter upper limit : ");
    scanf("%d",&n);
    printf("The natural numbers from 1 - %d : ",n);
    while(i<=n){
        printf("%d ",i);
        i += 1;
    }
    printf("\n");
    return 0;
}

