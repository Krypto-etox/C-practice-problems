#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the upper limit of the series : ");
    scanf("%d", &n);
    do{
        printf("%d\t",i);
        i = 1 + 2*i;          // complete the statment
    } while (i <= n);
}