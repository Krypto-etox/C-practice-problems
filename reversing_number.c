#include <stdio.h>
int main(){
    int n, reverse = 0, digit;
    printf("Enter an integer value : ");
    scanf("%d",&n);

    while (n != 0){
        digit = n % 10;
        reverse = reverse*10 + digit;
        n = n / 10;
    }
    printf("Revesed number : %d\n",reverse);
    return 0;
}