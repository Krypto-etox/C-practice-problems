#include <stdio.h>
int main(){
    int n, i = 2, count = 1;
    printf("Enter number : ");
    scanf("%d",&n);

    while(i<n){
        if(n % i == 0){
            count++;
        }
        i++;
    }
    if(count == 1){
        printf("Prime number\n");
    }else{
        printf("Not a Prime number\n");
    }
    return 0;
}